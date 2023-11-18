using UnityEngine;
using UnityEngine.UI;
using MySql.Data.MySqlClient;

public class Read : MonoBehaviour
{
    [Header("Database Properties")]
    public string Host = "localhost";
    public string User = "root";
    public string Password = "root";
    public string Database = "test";

    public string Table = "Tabla";

   
    private string connectionString;
    string query;
    private MySqlConnection MS_Connection;
    private MySqlCommand MS_Command;
    private MySqlDataReader MS_Reader;
    public Text textCanvas;

    public void viewInfo() {

        query = "SELECT * FROM "+Table;
        MySqlConnectionStringBuilder builder = new MySqlConnectionStringBuilder();
        builder.Server = Host;
        builder.UserID = User;
        builder.Password = Password;
        builder.Database = Database;


        MS_Connection = new MySqlConnection(builder.ToString());
        MS_Connection.Open();

        MS_Command = new MySqlCommand(query, MS_Connection);

        MS_Reader = MS_Command.ExecuteReader();
        while (MS_Reader.Read())
        {
            textCanvas.text += "\n              " + MS_Reader[0] + "                            " + MS_Reader[1] + "                     " + MS_Reader[2] ;
        }
        MS_Reader.Close();
        Debug.Log("conexion exitosa");
        MS_Connection.Close();

    }
   
}
