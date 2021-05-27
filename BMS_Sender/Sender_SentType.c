/* File Details ***********************************************************************************************
* File Name   :	Sender_SentType.c
* Author      : Arul Kumar Sundaramoorthy
* Description : Battery Management System(BMS) Data sender type selection
* Functions   : BMS_SendData, sendToConsole
* *********************************************************************************************************** */

/* **************************************** Header Files **************************************************** */
#include "Sender_CollectData.h"
#include "Sender_SentType.h"
#include "stdio.h"
#include "string.h"

/* ***************************************** Variables ****************************************************** */
SendStatus(*SendData[])(float, float) = {sendToConsole};


/* Function Details *******************************************************************************************
* Function Name : BMS_SendData
* Description   : Read Temperature & SOC Value
* Arguments     : SendType
* Returns       : SendStatus
* *********************************************************************************************************** */
SendStatus BMS_SendData(SendType sendType)
{
  float Temperature;
  float Soc;
  SendStatus status;

  Temperature = BmsSender_ReadTemperture();
  Soc = BmsSender_ReadSOC();

  status = SendData[sendType](Temperature, Soc);
  
  return status;
}

/* Function Details *******************************************************************************************
* Function Name : sendToConsole
* Description   : Send tempertaure & SOC data to console
* Arguments     : Temperature(float), SOC(float)
* Returns       : SendStatus
* *********************************************************************************************************** */
SendStatus sendToConsole(float Temperature, float Soc) {
  
  printf("Temperature:%+05.1f,SOC:%3.1f\n", Temperature,Soc);
  
  return CONSOLE_SEND_PASS;
}

