using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using TMPro;
public class FirebaseAuthManagerApi : MonoBehaviour
{
    public string apiKey = "AIzaSyCd3asmn4--oDMetEA6509WkO_B8IRy8v4"; // Obtén tu API Key de Firebase Console
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

        }
        else
        {
            Debug.Log("Error: " + request.error);
            warningRegisterText.text=request.error;
        }
    }





}
