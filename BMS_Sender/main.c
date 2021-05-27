/* File Details ***********************************************************************************************
* File Name   :	main.c
* Author      : Arul Kumar Sundaramoorthy
* Description : Battery Management System(BMS) Temperature & SOC Data Sends for every 1 Seconds
* Functions   : main
* *********************************************************************************************************** */

/* **************************************** Header Files **************************************************** */
#include "Sender_CollectData.h"
#include "Sender_SentType.h"
#include "stdio.h"
#include "stdlib.h"

/* Function Details *******************************************************************************************
* Function Name : main
* Description   : main function to transmit data for every 1 seconds
* Arguments     : -
* Returns       : 0
* *********************************************************************************************************** */
int main() {
    
    for(int i=0;i<=10;i++)
    {
    BMS_SendData(TO_CONSOLE);
    }
    
    return 0;
}
