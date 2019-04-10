using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LightBall : MonoBehaviour
{
    public LightSwitching IsBall;
    public GameObject AreaComponent;

    public TextMeshProUGUI SoulCount; // Text-ul de soul
    public GameObject SoulReloadText; // reload text
    public GameObject SoulIcon; //slider

    public static int MaximumSoul = 500;
    public float SoulPercent=500;
    public float SoulPercentMaxPercent;

    // Start is called before the first frame update

    // Update is called once per frame
    void Update()
    {
        // Dont charge under minus

        //Update for things like soul %, raycast ,etc
        SoulPercent = SoulPercent - Time.deltaTime;
        SoulPercentMaxPercent=(SoulPercent/MaximumSoul)*100;
        SoulCount.text = SoulPercentMaxPercent.ToString("F0") + "%";


        if(IsBall == true)
        {
            if(SoulPercentMaxPercent >0.5f){
                AreaComponent.GetComponent<Light>().enabled = true;
                AreaComponent.GetComponent<Light>().intensity = (SoulPercentMaxPercent / 100)*2;

                SoulIcon.transform.localScale = new Vector3(0.0017f * SoulPercent, 0.0017f * SoulPercent, 0);

                if(SoulIcon.transform.localScale.x <= 0.35f && SoulIcon.transform.localScale.y <= 0.35f){
                    SoulIcon.transform.localScale = new Vector3(0.35f, 0.35f, 0);
                }

                if(AreaComponent.GetComponent<Light>().intensity < 0.5f)
                    AreaComponent.GetComponent<Light>().intensity = 0.5f;    
                if(SoulPercent == 0)
                    SoulReloadText.SetActive(true);
            }
        }
        if(SoulPercentMaxPercent < 0.5f)
        {
            SoulIcon.transform.localScale = new Vector3(0.1f, 0.1f, 0);
            AreaComponent.GetComponent<Light>().enabled = false;
            SoulPercent = 0;
            SoulPercentMaxPercent = 0;
        }
    }
}
