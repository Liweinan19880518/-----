#include "../App_Headers/includes.h"

extern  INT8U   baud_rate;
 /*-------------------------------------------------------------------------
* Function Name  : Baud_Rate_Init
* Description    : ϵͳ��ʼ��
* Input          : None
* Output         : None
* Return         : None
* onther         : 
--------------------------------------------------------------------------*/
void Baud_Rate_Init(void)
{
  if(pBaud_rateChoose0 == 0)
     baud_rate = 0;//Ĭ��500k 
  if(pBaud_rateChoose1 == 0) 
     baud_rate = 1;//250k
  if(pBaud_rateChoose4 == 0)
     baud_rate = 4;//250k
}