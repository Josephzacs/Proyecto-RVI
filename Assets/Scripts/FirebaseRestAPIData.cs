using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using TMPro;

public class FirebaseRestAPIData : MonoBehaviour
{
    public TMP_Text data;
    private string databaseURL = "https://proyectorvi-default-rtdb.firebaseio.com/";

    public void GetDataButton()
    {
        StartCoroutine(GetDataFromFirebase());
    }

    IEnumerator GetDataFromFirebase()
    {
        UnityWebRequest www = UnityWebRequest.Get(databaseURL + ".json?auth=" );
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
