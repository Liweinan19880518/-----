/*
 * Var_Type.h
 *
 *  Created on: 2012-3-23
 *      Author: qitiancun
 */

#ifndef VAR_TYPE_H_//VAR_TYPE_H_是否被宏定义
#define VAR_TYPE_H_

    #define             ADEveLen        10
    typedef             unsigned char   INT8U;
    typedef   volatile  unsigned char   VINT8U;
    typedef             unsigned int    INT16U;
    typedef   volatile  unsigned int    VINT16U;
    typedef             unsigned long   INT32U;
    
    typedef struct
    {
        /*调试*/
        INT8U ProceF;  //处理标志位
        INT8U Data[8];
        //INT8U SA;      //源地址 

    }CAN_REV_MSG;
    
    typedef union//20210608---新增电源控制板报文 
    {
       struct 
       {
         INT8U     POWER:1;//电源板控制位
         INT8U     Reserved0:7;
         INT8U     Reserved1:8;
         INT8U     Reserved2:8;
         INT8U     Reserved3:8;
         INT8U     Reserved4:8;
         INT8U     Reserved5:8;
         INT8U     Reserved6:8;
         INT8U     Reserved7:8;
       }Bits;
       INT8U data[8];
    }_GCan001msg;
    
    //extern volatile  _GCan001msg  CanID1;
    
         
    typedef union//20210610---新增电源控制板报文 
    {
       struct 
       {
         INT8U     POWER:1;//电源板控制位
         INT8U     Reserved0:7;
         INT8U     Reserved1:8;
         INT8U     Reserved2:8;
         INT8U     Reserved3:8;
         INT8U     Reserved4:8;
         INT8U     Reserved5:8;
         INT8U     Reserved6:8;
         INT8U     Reserved7:8;
       }Bits;
       INT8U data[8];
    }_GCan002msg;
        
    typedef union
    {
         struct
         {
              INT8U     bit0:1;
              INT8U     bit1:1;
              INT8U     bit2:1;
              INT8U     bit3:1;
              INT8U     bit4:1;
              INT8U     bit5:1;
              INT8U     bit6:1;
              INT8U     bit7:1;
              INT8U     bit8:1;
              INT8U     bit9:1;
              INT8U     bit10:1;
              INT8U     bit11:1;
              INT8U     bit12:1;
              INT8U     bit13:1;
              INT8U     bit14:1;
              INT8U     bit15:1;
         }bits;
         INT16U w;
    }WordBit;

 
    
    typedef union 
    {
        struct
        {
            INT16U d16H;
            INT16U d16L; 
        }dw;
        INT32U dw32;
    }ULONG;        

    typedef struct
    {
         INT8U     bDat[256];
         INT16U    wSectorStartAdd;
         INT16U    wBlockAdd;
    }tDFlashBuff;
    
    typedef struct
    {
         INT8U    Col;
         INT16U   isFlash;  
         INT8U    FlashEn; 
         
         INT8U    T1000msEnable;
         INT16U   Over1000msTime;    
         INT16U   T1000msTime;
         
         INT8U    T7000msEnable;//
         INT32U   Over7000msTime;//    
         INT32U   T7000msTime;//
         
         INT8U    T500msEnable;
         INT16U   Over500msTime;    
         INT16U   T500msTime;          

         
         INT8U    T10msEnable;
         INT16U   Over10msTime;    
         INT16U   T10msTime;
         
         INT8U    T100msTEnable;
         INT16U   Over100msTime;    
         INT16U   T100msTime; 
          
         INT8U    T30msEnable;
         INT16U   Over30msTime;    
         INT16U   T30msTime;  
              
         INT16U   millisecond;           
         INT8U    Seconds;
         INT8U    Minutes;
         INT8U    Hours;
    }ClockType;
 
    
    typedef struct                             
    {
		    INT16U         PushTime1;    //清零按键时间判断
		    INT16U         PushTime2;
		    INT8U          Valid1;
		    INT8U          Valid2;
		    INT8U          Valid3;
    }KeyType;  
             
   typedef struct                               
   {
       INT16U      id;
       //INT8U       msg[8];
       INT8U *       msg;
       INT8U       dlc;
       INT16U       timer; 
       //INT8U       prio;                     
   }_SendCanMsg;             
  	  	 
    typedef struct 
    {
        unsigned char protected_id;
        unsigned char data[15];
        unsigned char state;
        unsigned char check_sum;
        unsigned char error_code;
        unsigned char tout;
    }Lin_RevMsg;
      	  	  
    typedef struct {
        unsigned char id;
        unsigned char data[15];
    }Lin_Send_Msg;
    
    //INT32U TIMER1,TIMER2,STAR,STOP;// 
      	  	  	  	  	  	 	  	  	  	  	  	          
#endif /* VAR_TYPE_H_ */
