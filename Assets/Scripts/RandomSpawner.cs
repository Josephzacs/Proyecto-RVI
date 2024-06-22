using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSpawner : MonoBehaviour
{
    public GameObject spherePrefab;
    Vector3[] Spawns = new[]{
        new Vector3(-5,1,4),
        new Vector3(6,1,3),
        new Vector3(1,1,-8),
        new Vector3(-8,1,-8),
        new Vector3(-2,1,-10),
        new Vector3(7,1,-7),
        new Vector3(1,1,-2),
        new Vector3(-5,1,-2)
    };
    // Start is called before the first frame update
    void Start()
    {
        // Asegúrate de que hay suficientes posiciones para elegir
    if (Spawns.Length >= 2)
    {
        // Selecciona un índice aleatorio para la primera esfera
        int index1 = Random.Range(0, Spawns.Length);
        
        // Selecciona un segundo índice aleatorio que sea diferente al primero
        int index2 = index1;
        while (index2 == index1)
        {
            index2 = Random.Range(0, Spawns.Length);
        }

        // Instancia la primera esfera
        Instantiate(spherePrefab, Spawns[index1], Quaternion.identity);
        
        // Instancia la segunda esfera
        Instantiate(spherePrefab, Spawns[index2], Quaternion.identity);
    }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
