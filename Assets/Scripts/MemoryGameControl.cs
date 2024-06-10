using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using TMPro;

public class MemoryGameControl : MonoBehaviour
{
    private float timer = 0.0f;
    private float waitTime = 1.0f;

    private int score = 0;

    public TMP_Text scoreText;
    public GameObject rojo;
    public GameObject verde;
    public GameObject azul;

   
    private bool isplay = false;
    private int index = 1;
    private List<int> sequence;

    private List<int> result = new List<int>();
   // private List<int> sequence2= new List<int> {0, 1, 2, 0, 1, 2, 0, 1, 2, 0};

    // Start is called before the first frame   update

    void Start()
    {
        scoreText.text ="Pruebas completadas: "+score.ToString();
        GenerateColorSequence();
    }

    // Update is called once per frame
    void Update()
    {


           
    }

    private void GenerateColorSequence(){
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
            };
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
            };
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
            };
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

}
