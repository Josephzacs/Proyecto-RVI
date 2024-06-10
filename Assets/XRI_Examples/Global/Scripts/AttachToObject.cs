using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttachToObject : MonoBehaviour
{
    public Transform leftHand;
    void Start()
    {
        // Hacemos que este objeto sea un hijo de la mano izquierda del jugador
        transform.SetParent(leftHand);

        // Aseguramos que el objeto mantenga su posición y rotación relativas a la mano izquierda del jugador
        transform.localPosition = Vector3.zero;
        transform.localRotation = Quaternion.identity;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
