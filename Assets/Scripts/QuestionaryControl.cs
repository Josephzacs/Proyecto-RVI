using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Ubiety.Dns.Core;
using Proyecto26;
using UnityEngine.Localization.SmartFormat.Utilities;

public class QuestionaryControl : MonoBehaviour
{
    string localId = FirebaseManagerApi.localId;
    string idToken = FirebaseManagerApi.idToken;
    string url = "https://proyectorvi-default-rtdb.firebaseio.com/users/";
    [Header ("Questionary UI")] 
    public TMP_Text questionText;
    public TMP_Text answer1Text;
    public TMP_Text answer2Text;
    public TMP_Text answer3Text;

    [Header("Result UI")]
    public TMP_Text resultTextScore;
    public TMP_Text UserName;
    public TMP_Text resultTimeText;

    public GameObject resultPanel;

    public TMP_Text scoreText;

    private int score = 0;

    private string correctAnswer;
    private int indice = 0;

    bool isOver = false;
    public AudioSource correct;
    public AudioSource incorrect;

    private int limitTime = 120;

    private bool show = false;

    // Start is called before the first frame update
    void Start()
    {
        resultPanel.SetActive(false);
        scoreText.text = "Preguntas correctas: " + score.ToString();
        StartCoroutine(SetQuestion());
        StartCoroutine(QuestionaryTimer());
    }

    // Update is called once per frame
    void Update()
    {
        if (isOver)
        {
            setResults();
        }
    }

    public IEnumerator SetQuestion()
    {
        RestClient.Get<QuestionaryResponse>("https://proyectorvi-default-rtdb.firebaseio.com/preguntas/" + indice + ".json?auth=" + FirebaseManagerApi.idToken).Then(response =>
        {
            questionText.text = response.pregunta;
            questionText.enableAutoSizing = true;
            questionText.alignment = TextAlignmentOptions.Center;
            answer1Text.text = response.opciones[0];
            answer1Text.enableAutoSizing = true;
            answer2Text.text = response.opciones[1];
            answer2Text.enableAutoSizing = true;
            answer3Text.text = response.opciones[2];
            answer3Text.enableAutoSizing = true;
            correctAnswer = response.respuestaCorrecta;
        }).Catch(error =>
        {
            Debug.Log(error.Message);
        });

        yield return null; // Add this line to return a value
    }

    public void OnRedButtonPressed()
    {
        CheckAnswer(answer1Text.text);
    }

    public void OnBlueButtonPressed()
    {
        CheckAnswer(answer2Text.text);
    }

    public void OnGreenButtonPressed()
    {
        CheckAnswer(answer3Text.text);
    }

    private void CheckAnswer(string selectedAnswer)
    {
        if (correctAnswer == selectedAnswer)
        {
            correct.Play();
            score++;
            scoreText.text = "Preguntas correctas: " + score.ToString();
        }
        else
        {
            incorrect.Play();
        }

        if (indice == 9)
        {
            saveScore();
            isOver = true;
        }
        else
        {
            indice++;
            StartCoroutine(SetQuestion());
        }
    }

    private void saveScore()
    {
        UserScore user = new UserScore();
        user.score = score;
        user.time = TimeControl.finalTime;
        RestClient.Put(url + localId + "/actividad3" + ".json?auth=" + idToken, user); // Guardamos la puntuación en la base de datos
    }

    private void setResults()
    {
        if(!show){
        resultTextScore.enableAutoSizing = true;
        UserName.enableAutoSizing = true;
        resultTimeText.enableAutoSizing = true;
        resultTextScore.text = "Preguntas correctas: " + score.ToString();
        UserName.text = "Usuario: " + FirebaseManagerApi.playerName;
        resultTimeText.text = "Tiempo: " + TimeControl.finalTime.ToString() + "s";


        resultPanel.SetActive(true);
        show = true;
        }

    }

    private IEnumerator QuestionaryTimer()
    {
        float startTime = Time.time;
        while (Time.time - startTime < limitTime && !isOver)
        {
            yield return null;
        }

        setResults();

        if (!isOver)
        {
            saveScore();
            isOver = true;
        }

        yield return new WaitForSeconds(5.0f);
        LoadMenu();
    }

    private void LoadMenu(){
        SceneTransitionManager.singleton.GoToSceneAsync(1);
    }


}
