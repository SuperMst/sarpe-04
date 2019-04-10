using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DoorCellOpen : MonoBehaviour
{
	public float TheDistance;
	public GameObject Hinge;
	public GameObject ActionDisplayOpen;
	public GameObject ActionDisplayClose;
	public GameObject TheDoor;
	public AudioSource CreekSound;
	public bool isOpen = false;
	float eulerAngY; 

    void Update()
    {
        TheDistance = PlayerRayCast.DistanceFromTarget;
		eulerAngY = Hinge.transform.rotation.eulerAngles.y;
	}
	void OnMouseOver() {
		if(eulerAngY  == 0 || eulerAngY  == 290){  //here i want to put a ,,if door is 0 degree rotation or -70 = 290 (open door)
			if(TheDistance <=3) {
				if(isOpen == false && eulerAngY  == 0)
				{
					ActionDisplayOpen.SetActive(true);
					ActionDisplayClose.SetActive(false);
				}
				else if(isOpen == true && eulerAngY  == 290)
				{
					ActionDisplayOpen.SetActive(false);
					ActionDisplayClose.SetActive(true);
				}
			}
			if (Input.GetMouseButtonDown(0) && TheDistance <=3)
				{
				if(isOpen == false)
					{
					isOpen = true;
					this.GetComponent<BoxCollider>().enabled = true;
					ActionDisplayOpen.SetActive(false);
					TheDoor.GetComponent<Animation>().Play(isOpen ? "DoorOpenAnim" : "DoorCloseAnim");
					CreekSound.Play();
					}
				else
					{
					isOpen = false;
					this.GetComponent<BoxCollider>().enabled = true;
					ActionDisplayClose.SetActive(true);
					TheDoor.GetComponent<Animation>().Play(isOpen ? "DoorOpenAnim" : "DoorCloseAnim");
					CreekSound.Play();
				}
			}
		}
		else{
			OnMouseExit();
		}
	}
	
	void OnMouseExit () 
		{
			ActionDisplayOpen.SetActive(false);
			ActionDisplayClose.SetActive(false);
		}
}

