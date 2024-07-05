using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using Proyecto26;

using TMPro;

public class MemoryGameControl : MonoBehaviour
{

    string localId = FirebaseManagerApi.localId;
    string idToken = FirebaseManagerApi.idToken;
    string url = "";
    private int score = 0;

    public TMP_Text scoreText;
    public GameObject rojo;
    public GameObject verde;
    public GameObject azul;

    public TMP_Text resultText;
   public TMP_Text timeText;
   public TMP_Text UserName;

   public GameObject resultPanel;

   private int limitSequence = 10;


   
    private bool isplay = false;
    private int index = 1;
    private List<int> sequence;

    private List<int> result = new List<int>();


    void Start()
    {
        resultPanel.SetActive(false);
        scoreText.text ="Pruebas completadas: "+score.ToString();
        GenerateColorSequence();
    }

    // Update is called once per frame
    void Update()
    {


           
    }

    private void GenerateColorSequence(){
        if(index > limitSequence){
            saveScore();
            setResults();
            Time.timeScale = 0f;
            return;
        }
        sequence = new List<int>();
        for(int i = 0; i < index; i++){
            sequence.Add(Random.Range(0, 3));
        }
        Debug.Log("Sequence: " + string.Join(",", sequence));
        index++;
        StartCoroutine(PlaySequence());

    }
    private IEnumerator PlaySequence(){
        
       
        for(int i = 0; i < sequence.Count; i++){
            Debug.Log("Playing sequence at index: " + i);
            yield return new WaitForSeconds(1);
            switch(sequence[i]){
                case 0:
                    rojo.SetActive(true);
                    azul.SetActive(false);
                    verde.SetActive(false);
                    break;
                case 1:
                    verde.SetActive(true);
                    azul.SetActive(false);
                    rojo.SetActive(false);
                    break;
                case 2:
                    azul.SetActive(true);
                    rojo.SetActive(false);
                    verde.SetActive(false);
                    break;
            }
            yield return new WaitForSeconds(1);
            rojo.SetActive(false);
            azul.SetActive(false);
            verde.SetActive(false);
        }

        isplay = true;

        
    }

    public void OnRedButtonPressed(){

        result.Add(0);
        if(result.Count == sequence.Count && isplay){
            if(CheckResult()){
                addScore();
                result.Clear();
                sequence.Clear();
                isplay = false;
                GenerateColorSequence();
            }
            else{
                saveScore();
                setResults();
                Time.timeScale = 0f;
            }
        }

    }

    public void OnGreenButtonPressed(){

        result.Add(1);
        if(result.Count == sequence.Count && isplay){
             if(CheckResult()){
                addScore();
                result.Clear();
                sequence.Clear();
                isplay = false;
                GenerateColorSequence();
            }
            else{
                saveScore();
                setResults();
                Time.timeScale = 0f;
            }
        }

    }

    public void OnBlueButtonPressed(){

        result.Add(2);
        if(result.Count == sequence.Count && isplay){
            if(CheckResult()){
                addScore();
                result.Clear();
                sequence.Clear();
                isplay = false;
                GenerateColorSequence();
            }            
            else{
                saveScore();
                setResults();
                Time.timeScale = 0f;
            }
        }

    }

    bool CheckResult(){
        for(int i = 0; i < sequence.Count; i++){
            if(sequence[i] != result[i]){
                Debug.Log("You lose");
                return false;
            }
        }
        Debug.Log("You win");
        return true;
    }

    void addScore(){
        score++;
        scoreText.text = "Pruebas completadas:"+score.ToString();
    }


            void saveScore(){
            UserScore user = new UserScore();
            user.score = score;
            user.time = TimeControl.finalTime;
            RestClient.Put(url + localId +"/actividad2"+ ".json?auth=" + idToken, user); // Guardamos la puntuación en la base de datos
        }
        void setResults(){
        resultText.fontSizeMax = 15;
        resultText.enableAutoSizing = true;
        timeText.fontSizeMax = 15;
        timeText.enableAutoSizing = true;
        UserName.fontSizeMax = 15;
        UserName.enableAutoSizing = true;
        RestClient.Get<UserScore>(url + localId +"/actividad2"+ ".json?auth=" + idToken).Then(response =>{
            
            resultText.text = "Pruebas Completadas" + response.score;
            timeText.text = response.time;
            UserName.text = FirebaseManagerApi.playerName;
        });
        

        resultPanel.SetActive(true);
    }

}
