using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class UserScore
{
    public int score;
    public string time; 

    public UserScore()
    {
        score = FirebaseManagerApi.playerScore;
        time = FirebaseManagerApi.playerTime;
    }
}
