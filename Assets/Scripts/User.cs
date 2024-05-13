using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class User
{
    public string name;
    public string email;

    public int score;

    public string time; 


    public User()
    {
        name = FirebaseManagerApi.playerName;
        email = FirebaseManagerApi.playerEmail;
        score = FirebaseManagerApi.playerScore;
        time = FirebaseManagerApi.playerTime;
        
       
    }
    
}