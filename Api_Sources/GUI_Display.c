#define  GLOBALS_GUI_DISP


#include "../App_Headers/includes.h"

HardWireCheck WarningCheck;
HardWireCheck FuelAddCheck;
HardWireCheck FuelMinCheck;
HardWireCheck CanAddCheck;
HardWireCheck CanMinCheck;
HardWireCheck ChargeCheck;


void HardWireCheckInit(void)
{

}


/*-------------------------------------------------------------------------
* Function Name  : Gui_ButoonProc
* Description    : ��������
* Input          : None
* Output         : None
* Return         : None
* onther         : 
--------------------------------------------------------------------------*/
/*void Gui_ButoonProc(void)
{           
      //�������� ͬʱ��
      if((pSBRInput == PushDown) && (pSBLInput == PushDown))
      {
         GCan001msg.data[0] = 0x00;
         GCan002msg.data[0] = 0x00;
      }
      if((pSBLInput == PushDown) && (pSBRInput == UpSpring))//���
      {  
          if((Key.PushTime1 >= 2000)&&(Key.PushTime2 >= null)) 
          {       
            GCan001msg.data[0] = 0x01; 
          }
      }
      if((pSBRInput == PushDown) && (pSBLInput == UpSpring))//�Ҽ�
      {
          if((Key.PushTime2 >= 2000)&&(Key.PushTime1 >= null)) 
          {
            GCan002msg.data[0] = 0x01; 
          }
      }

      if((pSBLInput == UpSpring)&&(pSBRInput == UpSpring))
      {
         Key.PushTime1 = null;
         Key.PushTime2 = null;
      }
}*/

/*20210611---����*/
void Gui_CanSignalProc(void) 
{
   if((GCan001msg.data[0]&0x01) == 0x01){
        pPowerControl1 = on;
   }else{
        pPowerControl1 = off;
   } 
   if((GCan002msg.data[0]&0x01) == 0x01){
        pPowerControl2 = on;
   }else{
        pPowerControl2 = off;
   }    
}





