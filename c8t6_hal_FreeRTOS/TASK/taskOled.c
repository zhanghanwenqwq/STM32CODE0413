#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "FreeRTOS.h"
#include "task.h"
#include "cmsis_os.h"
#include "i2c.h"
#include "oled.h"
#include "taskOled.h"


void task_Oled(void *arg[])
{
	OLED_Init();
	OLED_CLS();
    char str[8] = {0};
	sprintf(str,"create FreeRTOS task");
	OLED_ShowStr(0,1,(unsigned char *)str,BUFERSIZE6X8);
	OLED_ShowChar(0,2,'b',CHARSIZE6X8);
	while(1){
	
	
	
	}


}
