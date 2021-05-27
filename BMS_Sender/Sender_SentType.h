/* *************************************************************************
* File Name   :	Sender_SentType.h
* Description : Header file for BMS Sender type selection
* ************************************************************************* */

/* ******************************* Defines ******************************* */
typedef enum {
  TO_CONSOLE,
  MAX_TYPE
} SendType;

typedef enum {
  SEND_FAIL,
  CONSOLE_SEND_PASS
} SendStatus;

SendStatus(*SendData[])(float, float) = {sendToConsole};

/* ***************************** Prototypes ***************************** */
SendStatus sendToConsole(float Temperature, float Soc);
