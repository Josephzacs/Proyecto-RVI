using UnityEngine;
using System.Collections;
using TMPro;
using Ubiety.Dns.Core;
using System;
using Proyecto26;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Models;
using Unity.VisualScripting.FullSerializer;



public class FirebaseManagerApi : MonoBehaviour
{
    User user1 = new User();
    
    private string apiKey = "AIzaSyCd3asmn4--oDMetEA6509WkO_B8IRy8v4";
    private string databaseURL = "https://proyectorvi-default-rtdb.firebaseio.com/users/";

    public static string localId;
    public static string idToken;

    public static string playerName;
    public static string playerEmail;
    public static int playerScore;

    public static string playerTime;

    [Header("Data")]
    public TMP_Text dataNombre;
    public TMP_Text dataEmail;

    
    [Header("Login")]
    public TMP_InputField emailLoginField;
    public TMP_InputField passwordLoginField;
    public TMP_Text warningLoginText;
    public TMP_Text confirmLoginText;

    
    [Header("Register")]
    public TMP_InputField emailRegisterField;

    public TMP_InputField usernameRegisterField;
    public TMP_InputField passwordRegisterField;

    public TMP_Text warningRegisterText;


    public void LoginButton()
    {
        //Call the login coroutine passing the email and password
        StartCoroutine(LoginApi(emailLoginField.text,passwordLoginField.text));
    }

    public void RegisterButton()
    {
        //Call the register coroutine passing the email, password, and username
        StartCoroutine(RegisterApi(emailRegisterField.text, passwordRegisterField.text, usernameRegisterField.text));
    }

    public void GetDataButton()
    {
        StartCoroutine(GetDataFromFirebase());
    }
    IEnumerator LoginApi(string email,string password)
    {
        // Datos del usuario para iniciar sesión
         

        // URL de la solicitud de inicio de sesión con correo electrónico y contraseña
        string url = "https://identitytoolkit.googleapis.com/v1/accounts:signInWithPassword?key=" + apiKey;


        // Crear datos de solicitud JSON
        string userData = "{\"email\":\"" + email + "\",\"password\":\"" + password + "\",\"returnSecureToken\":true}";
        
        RestClient.Post<SignResponse>("https://identitytoolkit.googleapis.com/v1/accounts:signInWithPassword?key=" + apiKey, userData).Then(response =>
        {
            //Debug.Log(response.Text);
            warningLoginText.text = "";
            confirmLoginText.text = "Logged In";

            //FirebaseResponse response2 = JsonUtility.FromJson<FirebaseResponse>(response.Text);
            localId= response.localId;
            idToken = response.idToken;
            GetUsername();
            /*FirebaseAuth.Instance.RefreshToken = response2.refreshToken;
            Debug.Log("ID Token: " + FirebaseAuth.Instance.LocalId);*/
            ChangeScene();

            confirmLoginText.text = "";
        }).Catch(error =>
        {
            Debug.Log(error);
            warningLoginText.text = error.Message;
        });

        yield return null;


        /*// Configurar la solicitud HTTP
        UnityWebRequest request = new UnityWebRequest(url, "POST");
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(json);
        request.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");
        

        // Enviar la solicitud
        yield return request.SendWebRequest();

        // Manejar la respuesta
        if (request.result == UnityWebRequest.Result.Success)
        {
            Debug.Log("Login successful!");
            string responseText = request.downloadHandler.text;
            Debug.Log(responseText);
            warningLoginText.text = "";
            confirmLoginText.text = "Logged In";

            FirebaseResponse response = JsonUtility.FromJson<FirebaseResponse>(responseText);
            FirebaseAuth.Instance.LocalId = response.localId;
            FirebaseAuth.Instance.IdToken = response.idToken;
            FirebaseAuth.Instance.RefreshToken = response.refreshToken;
            Debug.Log("ID Token: " + FirebaseAuth.Instance.LocalId);
            //StartCoroutine(GetDataFromFirebase());

            yield return new WaitForSeconds(1);
            UIManager.instance.userData();

            confirmLoginText.text = "";

        }
        else
        {
            Debug.Log("Error: " + request.error);
            warningLoginText.text=request.error;
        }*/
    }
    IEnumerator RegisterApi(string email, string password, string username)
    {


        // URL de la solicitud de registro de usuario con correo electrónico y contraseña
        string url = "https://identitytoolkit.googleapis.com/v1/accounts:signUp?key=" + apiKey;

        // Crear datos de solicitud JSON
        string userData = "{\"email\":\"" + email + "\",\"password\":\"" + password + "\",\"returnSecureToken\":true}";

        RestClient.Post<SignResponse>("https://identitytoolkit.googleapis.com/v1/accounts:signUp?key=" + apiKey, userData).Then(response =>
        {
            //Debug.Log(response.Text);
            warningRegisterText.text = "Registration successful!";
           
            localId = response.localId;
            idToken = response.idToken;
            playerName = username;
            playerEmail = email;
            playerScore = 0;
            playerTime = "00:00";
            postToDatabase();
            
        }).Catch(error =>
        {
            Debug.Log(error);
            warningRegisterText.text = error.Message;
        });
        
        // Configurar la solicitud HTTP
        /*UnityWebRequest request = new UnityWebRequest(url, "POST");
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(json);
        request.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        // Enviar la solicitud
        yield return request.SendWebRequest();

        // Manejar la respuesta
        if (request.result == UnityWebRequest.Result.Success)
        {
            Debug.Log("Registration successful!");
            string responseText = request.downloadHandler.text;
            Debug.Log(responseText);
            warningRegisterText.text="Registration successful!";
            FirebaseResponse response = JsonUtility.FromJson<FirebaseResponse>(responseText);
            string idToken = response.localId;
            Debug.Log("ID Token: " + idToken);

        }
        else
        {
            Debug.Log("Error: " + request.error);
            warningRegisterText.text=request.error;
        }*/
        yield return null;
    }


    IEnumerator GetDataFromFirebase()
    {
       /* string localId = FirebaseAuth.Instance.LocalId;
        string idToken = FirebaseAuth.Instance.IdToken;
        Debug.Log("Refresh Token: " + idToken);*/

        RestClient.Get<User>(databaseURL+localId+ ".json?auth="+idToken ).Then(response =>
        {
            dataNombre.text = response.name;
            dataEmail.text = response.email;
        });
        /*UnityWebRequest www = UnityWebRequest.Get(databaseURL+localId+ ".json?auth="+idToken );

        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            User user = JsonUtility.FromJson<User>(www.downloadHandler.text);
            Debug.Log(www.downloadHandler.text);
            dataNombre.text = user.name;
            dataEmail.text = user.email;
        }*/

        yield return null; // Add this line to ensure all code paths return a value
    }
    public void postToDatabase(){
        User user = new User();
        RestClient.Put(databaseURL + localId + ".json?auth=" + idToken,user);
    
    
    }

    

    private void GetUsername()
    {
        RestClient.Get<User>(databaseURL + "/" + localId + ".json?auth=" + idToken).Then(response =>
        {
            playerName = response.name;
            playerEmail = response.email;
        });
    }

    private void ChangeScene(){
        TimeControl.finalTime = "00:00";
        SceneTransitionManager.singleton.GoToSceneAsync(1);

    }

}


