using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class FlashLight : MonoBehaviour
{
    public LightSwitching IsFlash;
    public GameObject LightComponent;

    public TextMeshProUGUI BatteryCount;
    public GameObject BatteryReloadText;
    public GameObject BatteryIcon;

    public static int MaximumBattery = 5;
    public static int batterynumber = 5;
    public float batterypercent;

    public float batteryFull = 150;


    // Start is called before the first frame update
    void Start()
    {
        BatteryCount.text = batterynumber + " / " + MaximumBattery;
    }

    // Update is called once per frame
    void Update()
    {

        if(batterypercent == 0)
            batterypercent = 0;  

        BatteryCount.text = batterynumber + " / " + MaximumBattery;
        batterypercent = batterypercent - Time.deltaTime;

        if(IsFlash == true){
            if(batterypercent > 0){
                LightComponent.GetComponent<Light>().enabled =true;
                LightComponent.GetComponent<Light>().intensity =  batterypercent / 150;
                BatteryIcon.GetComponent<Slider>().value = batterypercent;
                    if(LightComponent.GetComponent<Light>().intensity < 0.4f)
                    {
                        LightComponent.GetComponent<Light>().intensity = 0.4f;
                    }
                    if(batterypercent == 0 && batterynumber >= 1)
                    {
                        BatteryReloadText.SetActive(true);
                    }
                }
            }
            
        if(batterynumber > 0 && batterypercent < 70){
            if(Input.GetButtonDown("R")){
                batterynumber--;
                batterypercent = batteryFull;
            }
            if(batterypercent < 70){
                BatteryReloadText.SetActive(true);
            }
            else{
                BatteryReloadText.SetActive(false); 


            }   
        }
        if(batterypercent < 1){
            LightComponent.GetComponent<Light>().enabled =false;
        }
        if(Input.GetButtonDown("O"))
            batterynumber++;
    }
}
