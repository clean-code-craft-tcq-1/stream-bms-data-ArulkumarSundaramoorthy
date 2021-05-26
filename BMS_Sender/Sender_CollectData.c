/* ***********************************************************************************************************
* File Name   :	Sender_CollectData.c
* Author      : Arul Kumar Sundaramoorthy
* Description : Battery Management System(BMS) Data Collection like Battery temperature and State of Charging
* Functions	  :
* *********************************************************************************************************** */

/* ********************************************************************************************************** */
* Function Name : CheckValueInRange
* Description   : 
* Arguments	    : 
* Returns		    : 
/* ********************************************************************************************************** */
int CheckValueInRange(float current_value, float min_value, float max_value)
{
  return((current_value >= min_value) && (current_value <= max_value));
}

/* **********************************************   Function   ********************************************** */
* Function Name : BmsSender_ReadTemperture
* Description   : Collect Battery Temperature Data from Sensor/DataSet
* Arguments	    : -
* Returns		    : Temperature value in float with one resolution
/* **********************************************              ********************************************** */
  float BmsSender_ReadTemperture()
{
  
}
