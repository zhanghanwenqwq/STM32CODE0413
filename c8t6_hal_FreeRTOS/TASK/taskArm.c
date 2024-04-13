#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "FreeRTOS.h"
#include "task.h"
#include "cmsis_os.h"
#include "taskArm.h"


void task_Arm(void *arg[])
{

	while(1){

		vTaskDelay(20);

	}

}
