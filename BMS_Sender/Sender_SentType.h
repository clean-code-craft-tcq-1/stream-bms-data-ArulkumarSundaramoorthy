/* *************************************************************************
* File Name   :	Sender_SentType.h
* Description : Header file for BMS Sender type selection
* ************************************************************************* */
#ifndef SENDER_SENTTYPE_H
#define SENDER_SENTTYPE_H

/* ******************************* Defines ******************************* */
typedef enum {
  TO_CONSOLE,
  MAX_TYPE
} SendType;

typedef enum {
  SEND_FAIL,
  CONSOLE_SEND_PASS
} SendStatus;

/* ***************************** Prototypes ***************************** */
SendStatus sendToConsole(float Temperature, float Soc);
SendStatus BMS_SendData(SendType sendType);

#endif
