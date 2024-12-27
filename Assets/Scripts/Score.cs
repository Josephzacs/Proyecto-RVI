using System.Collections;
using UnityEngine;
using TMPro;
using Proyecto26;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;

public class Score : MonoBehaviour
{
    string localId = FirebaseManagerApi.localId;
    string idToken = FirebaseManagerApi.idToken;
    string url = "https://proyectorvi-default-rtdb.firebaseio.com/users/";
    public TMP_Text scoreText; // Texto de la puntuación
    public static int score; // Puntuación
    bool isScoreSaved = false;
    bool isSetResults = false;

    public GameObject resultPanel;
    public TMP_Text resultText;
    public TMP_Text timeText;
    public TMP_Text UserName;

    private int limitTime = 60;

    void Start()
    {
        resultPanel.SetActive(false);
        score = 2; // Inicializamos la puntuación a 2
        scoreText.text = "Objetos por Encontrar: " + score; // Actualizamos el texto de la puntuación
        StartCoroutine(GameRoutine());
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            score--; // Disminuimos la puntuación
            scoreText.text = "Objetos por Encontrar: " + score; // Actualizamos el texto de la puntuación
            Destroy(gameObject); // Destruimos el objeto
        }
    }

    IEnumerator GameRoutine()
    {
        float startTime = Time.time;
        while (Time.time - startTime < limitTime && score > 0)
        {
            yield return null; // Esperamos un frame
        }

        setResults();

        if (!isScoreSaved)
        {
            isScoreSaved = true;
            UserScore user = new UserScore();
            user.score = score;
            user.time = TimeControl.finalTime;
            RestClient.Put(url + localId + "/actividad1" + ".json?auth=" + idToken, user); // Guardamos la puntuación en la base de datos
        }

        yield return new WaitForSeconds(5.0f); // Esperamos 2 segundos antes de cambiar de escena
        LoadMenu();
    }

    void setResults()
    {
        if (isSetResults)
        {
            return;
        }

        int Result = 2 - score;
        resultText.enableAutoSizing = true;
        timeText.enableAutoSizing = true;
        UserName.enableAutoSizing = true;
        resultText.text = "Objetos encontrados: " + Result.ToString();
        timeText.text = "Tiempo: " + TimeControl.finalTime.ToString();
        UserName.text = "Usuario: " + FirebaseManagerApi.playerName;
        resultPanel.SetActive(true);
        isSetResults = true;
    }

    void LoadMenu()
    {
        SceneTransitionManager.singleton.GoToSceneAsync(1);
    }
}
