/* File Details ***********************************************************************************************
* File Name   :	Sender_CollectData.c
* Author      : Arul Kumar Sundaramoorthy
* Description : Battery Management System(BMS) Data Collection like Battery temperature and State of Charging
* Functions   : isInRange, BmsSender_ReadTemperture, BmsSender_ReadSOC
* *********************************************************************************************************** */

/* **************************************** Header Files **************************************************** */
#include "Sender_CollectData.h"
#include "stdio.h"

/* Function Details *******************************************************************************************
* Function Name : isInRange
* Description   : Checks the current value within the maximum & minimum value
* Arguments     : current_value(float), min_value(float), max_value(float)
* Returns       : 1 (Value within range) or 0 (value out of range)
/* ********************************************************************************************************** */
int isInRange(float current_value, float min_value, float max_value)
{
  return((current_value >= min_value) && (current_value <= max_value));
}

/* Function Details *******************************************************************************************
* Function Name : BmsSender_ReadTemperture
* Description   : Collect Battery Temperature Data from Sensor/DataSet
* Arguments     : -
* Returns       : Temperature value in float with one resolution
/* ********************************************************************************************************** */
float BmsSender_ReadTemperture()
{
  float Temperture = 0;
  
  if(isInRange(Temperture, MIN_TEMP, MAX_TEMP))
  {
    return Temperture;
  }
  
  return ERROR_TEMP;
}

/* Function Details *******************************************************************************************
* Function Name : BmsSender_ReadSOC
* Description   : Collect Battery SOC Data from Sensor/DataSet
* Arguments     : -
* Returns       : SOC value in float with one resolution
/* ********************************************************************************************************** */
float BmsSender_ReadSOC()
{
  float Soc = 0;
  
  if(isInRange(Soc, MIN_SOC, MAX_SOC))
  {
    return Soc;
  }
  
  return ERROR_SOC;
}
