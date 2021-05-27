/* File Details ***********************************************************************************************
* File Name   :	Sender_SentType.c
* Author      : Arul Kumar Sundaramoorthy
* Description : Battery Management System(BMS) Data sender type selection
* Functions   : 
* *********************************************************************************************************** */

/* **************************************** Header Files **************************************************** */
#include "Sender_CollectData.h"
#include "Sender_SentType.h"
#include "stdio.h"
#include "stdlib.h"

/* ****************************************** Variables ***************************************************** */
SendStatus(*SendData[])(Temperature, Soc) = {sendToConsole};

/* Function Details *******************************************************************************************
* Function Name : sendToConsole
* Description   : Send tempertaure & SOC data to console
* Arguments     : Temperature(float), SOC(float)
* Returns       : SendStatus
* *********************************************************************************************************** */
SendStatus sendToConsole(float Temperature, float Soc) {
  
  printf("Temperature:%0.1f,SOC:0.1f\n", Temperature,Soc);
  
  return CONSOLE_SEND_PASS;
}
