using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreMemory : MonoBehaviour
{
    public int score = 0;
    public TMP_Text scoreText;

    void Start() {
        scoreText.text ="Pruebas completadas:"+score.ToString();
    }
    public void addScore(){
        score++;
        scoreText.text = "Pruebas completadas:"+score.ToString();
    }


}
