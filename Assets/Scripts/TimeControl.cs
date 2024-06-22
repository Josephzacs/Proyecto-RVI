using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class TimeControl : MonoBehaviour
{
    public TMP_Text timeText; // Texto del tiempo
    public static string finalTime; // Tiempo final

    public static int minu;

    private float sceneLoadTime; // Tiempo en el que se cargó la escena

    void Start() {
        timeText.text = "Tiempo: 0"; // Mostramos el tiempo actual
        sceneLoadTime = Time.time; // Guardamos el tiempo en el que se cargó la escena
    }

    void Update() {
        UpdateTimeText(); // Actualizamos el texto del tiempo
    }

    void UpdateTimeText() {
        float timeSinceSceneLoad = Time.time - sceneLoadTime; // Tiempo transcurrido desde que se cargó la escena
        int minutes = Mathf.FloorToInt(timeSinceSceneLoad / 60F); 
        minu = minutes;
        int seconds = Mathf.FloorToInt(timeSinceSceneLoad % 60F);
        finalTime = string.Format("Tiempo: {0:00}:{1:00}", minutes, seconds); // Mostramos el tiempo actual
        timeText.text = finalTime;
    }
}
