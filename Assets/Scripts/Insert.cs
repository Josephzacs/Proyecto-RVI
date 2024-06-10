using MySql.Data.MySqlClient;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class Insert : MonoBehaviour
{

    [Header("Database Properties")]
    public string Host = "localhost";
    public string User = "root";
    public string Password = "root";
    public string Database = "test";

    public Button insertDataButton;
    public TMP_InputField tableNameInputField;
    public TMP_InputField dataInputField1;
    public TMP_InputField dataInputField2;
    public TMP_InputField dataInputField3;


    void Start()
    {
        insertDataButton.onClick.AddListener(() => InsertData(tableNameInputField.text, dataInputField1.text, dataInputField2.text, dataInputField3.text));
    }

    public void InsertData(string tableName, string data, string data2, string data3)
    {
        MySqlConnectionStringBuilder builder = new MySqlConnectionStringBuilder();
        builder.Server = Host;
        builder.UserID = User;
        builder.Password = Password;
        builder.Database = Database;


        using (MySqlConnection connection = new MySqlConnection(builder.ToString()))
        {
            connection.Open();

            string query = $"INSERT INTO {tableName} (ID, nombre, edad) VALUES ('{data}', '{data2}', '{data3}')";

            MySqlCommand cmd = new MySqlCommand(query, connection);

            cmd.ExecuteNonQuery();
        }
    }
}