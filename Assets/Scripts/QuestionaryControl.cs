using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Ubiety.Dns.Core;
using Proyecto26;

public class QuestionaryControl : MonoBehaviour
{
    public TMP_Text questionText;
    public TMP_Text answer1Text;
    public TMP_Text answer2Text;
    public TMP_Text answer3Text;

    public TMP_Text scoreText;

    private int score = 0;

    private string correctAnswer;
    private int indice = 0;

     


    // Start is called before the first frame update

    public IEnumerator SetQuestion()
    {
        RestClient.Get<QuestionaryResponse>("https://proyectorvi-default-rtdb.firebaseio.com/preguntas/"+indice+".json?auth="+FirebaseManagerApi.idToken).Then(response =>
        {

            questionText.text = response.pregunta;
            questionText.enableAutoSizing = true;
            questionText.fontSizeMax= 20;
            questionText.alignment = TextAlignmentOptions.Center;
            answer1Text.text = response.opciones[0];
            answer1Text.enableAutoSizing = true;
            answer1Text.fontSizeMax= 15;
            answer2Text.text = response.opciones[1];
            answer2Text.enableAutoSizing = true;
            answer2Text.fontSizeMax= 15;
            answer3Text.text = response.opciones[2];
            answer3Text.enableAutoSizing = true;
            answer3Text.fontSizeMax= 15;
            correctAnswer = response.respuestaCorrecta;
            
        }).Catch(error =>
        {
            Debug.Log(error.Message);
        });
        
        yield return null; // Add this line to return a value
    }
    void Start()
    {
        scoreText.text ="Preguntas correctas: "+score.ToString();
        StartCoroutine(SetQuestion());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnRedButtonPressed(){
        if(correctAnswer == answer1Text.text){
            Debug.Log("Correcto");
            score++;
            scoreText.text ="Preguntas correctas: "+score.ToString();
            if(indice == 9){
                Debug.Log("Fin del juego");
            }
            if(indice < 9){
            indice++;
            StartCoroutine(SetQuestion());
            }
            
        }
        else{
            if(indice == 9){
                Debug.Log("Fin del juego");
            }
            if(indice < 9){
            indice++;
            StartCoroutine(SetQuestion());
            }
            Debug.Log("Incorrecto");
        }
    }

    public void OnBlueButtonPressed(){
        if(correctAnswer == answer2Text.text){
            Debug.Log("Correcto");
            score++;
            scoreText.text ="Preguntas correctas: "+score.ToString();
            if(indice == 9){
                Debug.Log("Fin del juego");
            }
            if(indice < 9){
            indice++;
            StartCoroutine(SetQuestion());
            }
        }
        else{
            if(indice == 9){
                Debug.Log("Fin del juego");
            }
            if(indice < 9){
            indice++;
            StartCoroutine(SetQuestion());
            }
        }
    }
    public void OnGreenButtonPressed(){
        if(correctAnswer == answer3Text.text){
            Debug.Log("Correcto");
            score++;
            scoreText.text ="Preguntas correctas: "+score.ToString();
            if(indice == 9){
                Debug.Log("Fin del juego");
            }
            if(indice < 9){
            indice++;
            StartCoroutine(SetQuestion());
            }
        }
        else{
            if(indice == 9){
                Debug.Log("Fin del juego");
            }
            if(indice < 9){
            indice++;
            StartCoroutine(SetQuestion());
            }
        }
    }

}
