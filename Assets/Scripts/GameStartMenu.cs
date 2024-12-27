using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameStartMenu : MonoBehaviour
{
    [Header("UI Pages")]
    public GameObject mainMenu;
    public GameObject options;
    public GameObject about;
    public GameObject start; 

    public GameObject Laberinto;
    public GameObject Preguntas;
    public GameObject Memoria;


    [Header("Main Menu Buttons")]
    public Button startButton;
    public Button startButton2;
    public Button startButton3;
    public Button optionButton;
    public Button aboutButton;
    public Button quitButton;
    public Button LaberintoButton;
    public Button PreguntasButton;
    public Button MemoriaButton;


    public List<Button> returnButtons;

    // Start is called before the first frame update
    void Start()
    {
        EnableMainMenu();

        //Hook events
        startButton.onClick.AddListener(StartGame);
        startButton2.onClick.AddListener(StartGame2);
        startButton3.onClick.AddListener(StartGame3);
        optionButton.onClick.AddListener(EnableOption);
        aboutButton.onClick.AddListener(EnableAbout);
        quitButton.onClick.AddListener(QuitGame);
        LaberintoButton.onClick.AddListener(EnableLaberinto);
        PreguntasButton.onClick.AddListener(EnablePreguntas);
        MemoriaButton.onClick.AddListener(EnableMemoria);

        foreach (var item in returnButtons)
        {
            item.onClick.AddListener(EnableMainMenu);
        }
    }

    public void QuitGame()
    {
        Application.Quit();
    }

    public void StartGame()
    {
        HideAll();
        SceneTransitionManager.singleton.GoToSceneAsync(2);
    }

    public void StartGame2()
    {
        HideAll();
        SceneTransitionManager.singleton.GoToSceneAsync(3);
    }

    public void StartGame3()
    {
        HideAll();
        SceneTransitionManager.singleton.GoToSceneAsync(4);
    }

    public void HideAll()
    {
        mainMenu.SetActive(false);
        options.SetActive(false);
        about.SetActive(false);
        start.SetActive(false);
        Laberinto.SetActive(false);
        Preguntas.SetActive(false);
        Memoria.SetActive(false);
    }

    public void EnableMainMenu()
    {
        mainMenu.SetActive(true);
        options.SetActive(false);
        about.SetActive(false);
        start.SetActive(false);
        Laberinto.SetActive(false);
        Preguntas.SetActive(false);
        Memoria.SetActive(false);
    }
    public void EnableOption()
    {
        mainMenu.SetActive(false);
        options.SetActive(true);
        about.SetActive(false);
        start.SetActive(false);
        Laberinto.SetActive(false);
        Preguntas.SetActive(false);
        Memoria.SetActive(false);
    }
    public void EnableAbout()
    {
        mainMenu.SetActive(false);
        options.SetActive(false);
        about.SetActive(true);
        start.SetActive(false);
        Laberinto.SetActive(false);
        Preguntas.SetActive(false);
        Memoria.SetActive(false);
    }
    public void Enablestart()
    {
        mainMenu.SetActive(false);
        options.SetActive(false);
        about.SetActive(false);
        start.SetActive(true);
        Laberinto.SetActive(false);
        Preguntas.SetActive(false);
        Memoria.SetActive(false);
    }
    public void EnableLaberinto()
    {
        mainMenu.SetActive(false);
        options.SetActive(false);
        about.SetActive(false);
        start.SetActive(false);
        Laberinto.SetActive(true);
        Preguntas.SetActive(false);
        Memoria.SetActive(false);
    }
    public void EnablePreguntas()
    {
        mainMenu.SetActive(false);
        options.SetActive(false);
        about.SetActive(false);
        start.SetActive(false);
        Laberinto.SetActive(false);
        Preguntas.SetActive(true);
        Memoria.SetActive(false);
    }
    public void EnableMemoria()
    {
        mainMenu.SetActive(false);
        options.SetActive(false);
        about.SetActive(false);
        start.SetActive(false);
        Laberinto.SetActive(false);
        Preguntas.SetActive(false);
        Memoria.SetActive(true);
    }
}
