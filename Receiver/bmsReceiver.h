/*--------------------------------------------------------------------------------
---    \file       bmsReceiver.h
---   \author      Ruthrapathi
---
---     \brief     proj header file to recive and process stream data
------------------------------------------------------------------------------------*/

/*Func declarations*/
void receiveConsoleData_v(void);
char* findingsubstring_p (char *dest, const char *src, int stIndx, int len);
void  computeMinMax_v (int currentValue[], int *maxValue, int *minValue);
float computeAverage_f(int currentValue[], int NumofValues);
