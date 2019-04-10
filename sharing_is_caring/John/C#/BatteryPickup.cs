using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BatteryPickup : MonoBehaviour
{
    public float TheDistance;
    public TextMeshProUGUI BatteryPickUpText;
    public TextMeshProUGUI BatteryPackFullText;
    public bool IsPressed = false;

    RaycastHit hit;
    Ray ray;
    
    // Start is called before the first frame update
    void Start()
    {
        TheDistance = PlayerRayCast.DistanceFromTarget;
        BatteryPickUpText.text = null;
        BatteryPackFullText.text = null;
    }

    // Update is called once per frame
    void Update()
    { 
        ray = Camera.main.ScreenPointToRay(Input.mousePosition);
    }

    void OnMouseOver(){
        if(Physics.Raycast(ray, out hit))
        {
            
            if(hit.collider.gameObject.tag == "Battery" && TheDistance < 3){
                if(IsPressed == false){
                    BatteryPickUpText.text = "Pickup Battery";
                }
                else{
                    BatteryPickUpText.text = null;
                }
                if(Input.GetMouseButton(0)){
                    if(FlashLight.batterynumber == FlashLight.MaximumBattery){
                        BatteryPackFullText.text = "Battery Pack Full";
                        IsPressed= true;
                    }
                    else{
                        BatteryPickUpText.text = null;
                        FlashLight.batterynumber++;
                        Destroy(hit.collider.gameObject);
                    }
                }
            }
        }
    }
    void OnMouseExit(){
        BatteryPickUpText.text = null;
        BatteryPackFullText.text = null;
        IsPressed = false;
    }
}
