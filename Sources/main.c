#define GLOBALS_VARIABLE

#include "../App_Headers/includes.h"
#include "main.h"

#define CAN_NUM  23
#define CAN_REV_NUM 2//收到报文数量

_SendCanMsg CanMsg[CAN_NUM];

CAN_REV_MSG CanRevMsg[CAN_REV_NUM];//调试---收到报文储存位置



INT16U  stand_id;//20210607---收到报文的ID
INT8U   m_dlc;//20210607---收到报文的DLC
INT8U   baud_rate = 0;//20220112---波特率，默认500k

void main(void)
{
    API_Sys_Init();
    //HardWireCheckInit();
    API_Set10msTimer(10, (ClockType*)&Clock);
    API_Set30msTimer(30, (ClockType*)&Clock);
    API_Set100msTimer(100, (ClockType*)&Clock);
    API_Set500msTimer(500, (ClockType*)&Clock);
    API_Set1000msTimer(1000, (ClockType*)&Clock);
    API_Set7000msTimer(7000, (ClockType*)&Clock);//

    for(;;)
    {

        //Gui_ButoonProc();
        
        Api_CAN_Rev();
        Gui_CanSignalProc(); 

        if(API_10msTimerOver((ClockType*)&Clock))
        {
            API_Set10msTimer(10, (ClockType*)&Clock);
        }
        
        if(API_100msTimerOver((ClockType*)&Clock))
        {
            API_Set100msTimer(100, (ClockType*)&Clock);
        }

        if(API_30msTimerOver((ClockType*)&Clock))
        {
            API_Set30msTimer(30, (ClockType*)&Clock);
        }

        if(API_500msTimerOver((ClockType*)&Clock))
        {
            API_Set500msTimer(500, (ClockType*)&Clock);
        }

        if(API_1000msTimerOver((ClockType*)&Clock))
        {
            API_Set1000msTimer(1000, (ClockType*)&Clock);
        }

        __RESET_WATCHDOG();

    }
}

/************************************************************************************************************/
