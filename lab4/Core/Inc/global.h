/*
 * global.h
 *
 *  Created on: Nov 18, 2023
 *      Author: PCPV
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "string.h"
#include "main.h"
#include <stdio.h>
#include <string.h>


//#define MAX_BUFFER_SIZE 100

#define INIT 1
#define RECEIVE_COMMAND 2
#define RESPONSE_DATA 3
#define WAITING 4
#define CHECK_COMMAND 5
#define END 6
extern int status;
extern int status1;


//extern uint8_t temp;
//extern uint8_t buffer[MAX_BUFFER_SIZE];
//extern uint8_t index_buffer;
//extern uint8_t buffer_flag;

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

int commandCheck();
#endif /* INC_GLOBAL_H_ */
