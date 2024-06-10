using UnityEngine;
using UnityEngine.AI;

public class EnemyController : MonoBehaviour
{
    public Transform player; // Referencia al jugador
    private NavMeshAgent navMeshAgent; // Referencia al componente NavMeshAgent

    void Start()
    {
        navMeshAgent = GetComponent<NavMeshAgent>(); // Obtenemos el componente NavMeshAgent
    }

    void Update()
    {
        navMeshAgent.SetDestination(player.position); // Hacemos que el personaje persiga al jugador
    }
}