/* *************************************************************************
* File Name   :	Sender_CollectData.h
* Description : Header file for BMS Sender Data Collection
* ************************************************************************* */
#ifndef SENDER_COLLECTDATA_H
#define SENDER_COLLECTDATA_H

/* ******************************* Defines ******************************* */
#define MIN_TEMP 		-50.0
#define MAX_TEMP		100.0
#define ERROR_TEMP  150.0
#define MIN_SOC  		0
#define MAX_SOC  		100
#define ERROR_SOC   255

/* ***************************** Prototypes ***************************** */
int isInRange(float current_value, float min_value, float max_value);
float BmsSender_ReadTemperture();

#endif
