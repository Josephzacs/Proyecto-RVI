using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using Proyecto26;

using TMPro;

public class MemoryGameControl : MonoBehaviour
{

    string localId = FirebaseManagerApi.localId;
    string idToken = FirebaseManagerApi.idToken;
    string url = "https://proyectorvi-default-rtdb.firebaseio.com/users/";
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

    bool isOver = false;
    private int index = 1;
    private List<int> sequence;

    private List<int> result = new List<int>();
    public AudioSource correct;
    public AudioSource incorrect;

    private int limitTime = 120;

    private bool show = false;



    void Start()
    {
        resultPanel.SetActive(false);
        scoreText.text ="Pruebas completadas: "+score.ToString();
        GenerateColorSequence();
        StartCoroutine(Timer());
    }

    // Update is called once per frame
    void Update()
    {

        if(isOver){
            setResults();
        }
           
    }

    private IEnumerator Timer(){
        float startTime = Time.time;
        while(Time.time - startTime < limitTime){
            yield return null;
        }

        setResults();

        if(!isOver){
            saveScore();
            isOver = true;
        } 

        yield return new WaitForSeconds(5.0f);
        loadMenu();
    }

    private void GenerateColorSequence(){
        if(index > limitSequence){
            saveScore();
            isOver = true;
            
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
                correct.Play();
                addScore();
                result.Clear();
                sequence.Clear();
                isplay = false;
                GenerateColorSequence();
            }
            else{
                incorrect.Play();
                result.Clear();
                sequence.Clear();
                isplay = false;
                GenerateColorSequence();
            }
        }

    }

    public void OnGreenButtonPressed(){

        result.Add(1);
        if(result.Count == sequence.Count && isplay){
             if(CheckResult()){
                correct.Play();
                addScore();
                result.Clear();
                sequence.Clear();
                isplay = false;
                GenerateColorSequence();
            }
            else{
                incorrect.Play();
                result.Clear();
                sequence.Clear();
                isplay = false;
                GenerateColorSequence();
            }
        }

    }

    public void OnBlueButtonPressed(){

        result.Add(2);
        if(result.Count == sequence.Count && isplay){
            if(CheckResult()){
                correct.Play();
                addScore();
                result.Clear();
                sequence.Clear();
                isplay = false;
                GenerateColorSequence();
            }            
            else{
                incorrect.Play();
                result.Clear();
                sequence.Clear();
                isplay = false;
                GenerateColorSequence();
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
            if(!show){
                        resultText.enableAutoSizing = true;
       
        timeText.enableAutoSizing = true;
       
        UserName.enableAutoSizing = true;
        resultText.text = "Pruebas completadas: "+score.ToString();
        timeText.text = "Tiempo: "+TimeControl.finalTime.ToString();
        UserName.text = "Usuario: "+FirebaseManagerApi.playerName;
        

        resultPanel.SetActive(true);
        show = true;
            }
    }

    void loadMenu(){
        SceneTransitionManager.singleton.GoToSceneAsync(1);
    }

}
