using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Proyecto26;
using UnityEngine.SceneManagement;

public class Score : MonoBehaviour
{
    string localId = FirebaseManagerApi.localId;
    string idToken = FirebaseManagerApi.idToken;
    string url = "";
    public TMP_Text scoreText; // Texto de la puntuación
    public static int score; // Puntuación
    bool isScoreSaved = false;
    void Start(){
        score = 0; // Inicializamos la puntuación a 0
        scoreText.text = "Puntuación: " + score; // Actualizamos el texto de la puntuación
    }

    void OnTriggerEnter(Collider other) {
        if(other.CompareTag ("Player")){ // Si el objeto que ha entrado en el trigger tiene la etiqueta "Player"
            score++; // Aumentamos la puntuación
            scoreText.text = "Puntuación: " + score; // Actualizamos el texto de la puntuación
            if(score == 2 && !isScoreSaved){
                isScoreSaved = true;
                User user = new User();
                user.score = score;
                user.time = TimeControl.finalTime;
                RestClient.Put(url + localId + ".json?auth=" + idToken, user); // Guardamos la puntuación en la base de datos
            }
            
            Destroy(gameObject); // Destruimos el objeto
        } 
    }


}
