/*
 * global.c
 *
 *  Created on: Nov 18, 2023
 *      Author: PCPV
 */

#ifndef SRC_GLOBAL_C_
#define SRC_GLOBAL_C_

#include"global.h"

int status = 2;
int status1 = RESPONSE_DATA;
int commandCheck(char *str) {
	if (str[0] == 'R' && str[1] == 'S' && str[2] == 'T' && str[3] == '#')
		return 1;
	else if (str[0] == 'O' && str[1] == 'K' && str[2] == '#')
		return 2;
	else return 0;

}
#endif /* SRC_GLOBAL_C_ */
