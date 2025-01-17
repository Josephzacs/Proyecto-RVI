using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class ButtonFollowVisual : MonoBehaviour
{
        
    public float resetSpeed = 5; 
    private bool freeze = false;
    public Vector3 localAxis;
    private Vector3 offset;
    public Transform visualTarget;
    private Vector3 initialLocalPosition;
    private Transform pokeAttachTransform;
    private XRBaseInteractable interactable;
    private bool isFollowing = false;

    public float followAngle = 45;
    // Start is called before the first frame update
    void Start()
    {
        initialLocalPosition = visualTarget.localPosition;
        interactable = GetComponent<XRBaseInteractable>();
        interactable.hoverEntered.AddListener(Follow);
        interactable.hoverExited.AddListener(Resetpos);
        interactable.selectEntered.AddListener(Freeze);
    }

    public void Follow(BaseInteractionEventArgs hover){
        if(hover.interactorObject is XRPokeInteractor){
            XRPokeInteractor interactor = (XRPokeInteractor)hover.interactorObject;

            pokeAttachTransform = interactor.attachTransform;
            offset = visualTarget.position - pokeAttachTransform.position;


            float pokeAngle = Vector3.Angle(offset, visualTarget.TransformDirection(localAxis));

            if(pokeAngle < followAngle){
                isFollowing = true;
                freeze = false;
            }
        }
    }

    public void Freeze (BaseInteractionEventArgs hover){
        if(hover.interactorObject is XRPokeInteractor){
            freeze = true;
        }
    }
    public void Resetpos(BaseInteractionEventArgs hover){
        if(hover.interactorObject is XRPokeInteractor){
            isFollowing = false;
            freeze = false;
        }
    }
    // Update is called once per frame
    void Update()
    {
        if(freeze) 
            return;

        if(isFollowing){
            Vector3 localTargetPosition = visualTarget.InverseTransformPoint(pokeAttachTransform.position+offset);
            Vector3 constrainedLocalTargetPosition = Vector3.Project(localTargetPosition, localAxis);
            visualTarget.position = visualTarget.TransformPoint(constrainedLocalTargetPosition);
        }
        else{
            visualTarget.localPosition = Vector3.Lerp(visualTarget.localPosition, initialLocalPosition, Time.deltaTime * resetSpeed);
        }
    }
}
