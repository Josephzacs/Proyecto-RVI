using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using TMPro;
using Ubiety.Dns.Core;
using System;

public class FirebaseAuth
{
    private static readonly Lazy<FirebaseAuth> lazy = new Lazy<FirebaseAuth>(() => new FirebaseAuth());

    public static FirebaseAuth Instance { get { return lazy.Value; } }

    public string IdToken { get; set; }
    public string LocalId { get; set; }
    public string RefreshToken { get; set; }

    private FirebaseAuth() { }
}




[System.Serializable]
public class FirebaseResponse
{
    public string localId;
    public string idToken;
    public string refreshToken;
}


public class FirebaseAuthManagerApi : MonoBehaviour
{
    public string apiKey = "AIzaSyCd3asmn4--oDMetEA6509WkO_B8IRy8v4";
    private string databaseURL = "https://proyectorvi-default-rtdb.firebaseio.com/";

    [Header("Data")]
    public TMP_Text data;

    
    [Header("Login")]
    public TMP_InputField emailLoginField;
    public TMP_InputField passwordLoginField;
    public TMP_Text warningLoginText;
    public TMP_Text confirmLoginText;
    
    [Header("Register")]
    public TMP_InputField emailRegisterField;
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
        StartCoroutine(RegisterApi(emailRegisterField.text, passwordRegisterField.text));
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
        string json = "{\"email\":\"" + email + "\",\"password\":\"" + password + "\",\"returnSecureToken\":true}";

        // Configurar la solicitud HTTP
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

            yield return new WaitForSeconds(2);
            UIManager.instance.userData();

            confirmLoginText.text = "";

        }
        else
        {
            Debug.Log("Error: " + request.error);
            warningLoginText.text=request.error;
        }
    }
    IEnumerator RegisterApi(string email, string password)
    {


        // URL de la solicitud de registro de usuario con correo electrónico y contraseña
        string url = "https://identitytoolkit.googleapis.com/v1/accounts:signUp?key=" + apiKey;

        // Crear datos de solicitud JSON
        string json = "{\"email\":\"" + email + "\",\"password\":\"" + password + "\",\"returnSecureToken\":true}";

        // Configurar la solicitud HTTP
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
        }
    }


    IEnumerator GetDataFromFirebase()
    {
        string idToken = FirebaseAuth.Instance.IdToken;
        Debug.Log("Refresh Token: " + idToken);


        UnityWebRequest www = UnityWebRequest.Get(databaseURL + ".json?auth="+ idToken );

        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log(www.downloadHandler.text);
            data.text = www.downloadHandler.text;

        }
    }


}
