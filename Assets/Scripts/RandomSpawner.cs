using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSpawner : MonoBehaviour
{
    public GameObject spherePrefab;
    List<Vector3> Spawns = new List<Vector3>{
        new Vector3(-5,1,4),
        new Vector3(6,1,3),
        new Vector3(1,1,-8),
        new Vector3(-8,1,-8),
        new Vector3(1,1,-2),
        new Vector3(-5,1,-2),
        new Vector3(7,1,-7),
    };
    // Start is called before the first frame update
    void Start()
    {
       for (int i = 0; i < 3; i++)
       {
         int randomIndex = Random.Range(0, Spawns.Count);
         Vector3 randomSpawnPosition = Spawns[randomIndex];
         Instantiate(spherePrefab, randomSpawnPosition, Quaternion.identity);
         Spawns.RemoveAt(randomIndex); // Remove the used spawn position
       }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
