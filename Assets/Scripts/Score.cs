using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Proyecto26;
using UnityEngine.SceneManagement;
using MySqlX.XDevAPI.Common;

public class Score : MonoBehaviour
{
    string localId = FirebaseManagerApi.localId;
    string idToken = FirebaseManagerApi.idToken;
    string url = "https://proyectorvi-default-rtdb.firebaseio.com/users/";
    public TMP_Text scoreText; // Texto de la puntuación
    public static int score; // Puntuación
    bool isScoreSaved = false;

   public GameObject resultPanel;

   public TMP_Text resultText;
   public TMP_Text timeText;
   public TMP_Text UserName;

    public int limitTime= 1;

   
    void Start(){
        resultPanel.SetActive(false);
        score = 2; // Inicializamos la puntuación a 0
        scoreText.text = "Objetos por Encontrar: " + score; // Actualizamos el texto de la puntuación
    }

    void OnTriggerEnter(Collider other) {
        if(other.CompareTag ("Player")){ // Si el objeto que ha entrado en el trigger tiene la etiqueta "Player"
            score--; // Aumentamos la puntuación
            scoreText.text = "Objetos por Encontrar: " + score; // Actualizamos el texto de la puntuación
            if(!isScoreSaved && score == 0){
                isScoreSaved = true;
                    UserScore user = new UserScore();
                    user.score = 2;
                    user.time = TimeControl.finalTime;
                    RestClient.Put(url + localId +"/actividad1"+ ".json?auth=" + idToken, user); // Guardamos la puntuación en la base de datos
                    setResults();
                    Time.timeScale = 0f;
                
            }
            
            Destroy(gameObject); // Destruimos el objeto
        } 
    }

    void Update(){
        if(limitTime==TimeControl.minu && !isScoreSaved){
            isScoreSaved = true;
            UserScore user = new UserScore();
            user.score = score;
            user.time = TimeControl.finalTime;
            RestClient.Put(url + localId +"/actividad1"+ ".json?auth=" + idToken, user); // Guardamos la puntuación en la base de datos
            
            setResults();
            Time.timeScale = 0f;
            
        }
    }


    void setResults(){
        resultText.fontSizeMax = 15;
        resultText.enableAutoSizing = true;
        timeText.fontSizeMax = 15;
        timeText.enableAutoSizing = true;
        UserName.fontSizeMax = 15;
        UserName.enableAutoSizing = true;
        RestClient.Get<UserScore>(url + localId +"/actividad1"+ ".json?auth=" + idToken).Then(response =>{
            
            resultText.text = "Objetos encontrados" + response.score;
            timeText.text = response.time;
            UserName.text = FirebaseManagerApi.playerName;
        });
        

        resultPanel.SetActive(true);
    }


}
