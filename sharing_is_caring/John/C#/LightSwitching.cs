using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightSwitching : MonoBehaviour
{
    public int SelectedLight = 0;

    public GameObject FlashLightObj;
    public GameObject FlashLightTextObj;
    public bool IsFlash = false;


    public GameObject LightBallObj;
    public GameObject LighBallTextObj;
    public bool IsBall = false;


    public GameObject DeadWorldObj;
    public bool IsDeadWorld = false;

    // Start is called before the first frame update
    void Start()
    {

        FlashLightObj.SetActive(false);
        LightBallObj.SetActive(false);
        DeadWorldObj.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Tab)) {
            if (SelectedLight >= transform.childCount - 1)
            {
                SelectedLight = 0;
            }
            else
            {
                SelectedLight++;
            }
        }
         switch (SelectedLight)
        {
            case 0: 
                FlashLight();
                FlashLightTextObj.SetActive(true);

                LightBallObj.SetActive(false);
                LighBallTextObj.SetActive(false);
                
                DeadWorldObj.SetActive(false);
                IsDeadWorld = false;
                break;
            case 1: 
                LightBall();
                LighBallTextObj.SetActive(true);

                FlashLightTextObj.SetActive(false);
                FlashLightObj.SetActive(false);

                DeadWorldObj.SetActive(false);
                IsFlash = false;
                break;
            case 2: 
                DeadWorld();
                FlashLightTextObj.SetActive(false);
                FlashLightObj.SetActive(false);

                LightBallObj.SetActive(false);
                LighBallTextObj.SetActive(false);
                
                IsBall = false;
                break;
        }
    }

    void FlashLight() {
        
        if(Input.GetButtonDown("F"))
        {
            if(IsFlash==false){
                FlashLightObj.SetActive(true);
                //FlashLightTextObj.SetActive(false);
                IsFlash = true;
            }   
            else
            {
                FlashLightObj.SetActive(false);
                //FlashLightTextObj.SetActive(true);
                IsFlash = false;
            }
        }
    }

    void LightBall(){
        if(Input.GetButtonDown("F"))
        {
            if(IsBall==false){
                LightBallObj.SetActive(true);
                IsBall = true;
            }   
            else
            {
                LightBallObj.SetActive(false);
                IsBall = false;
            }
        }
    }

    void DeadWorld(){
        if(Input.GetButtonDown("F"))
        {
            if(IsDeadWorld==false){
                DeadWorldObj.SetActive(true);
                IsDeadWorld = true;
            }   
            else
            {
                DeadWorldObj.SetActive(false);
                IsDeadWorld = false;
            }
        }
    }
}
