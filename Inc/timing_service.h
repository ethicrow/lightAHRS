/*
 * timing_service.c
 *
 *  Created on: Apr 13, 2020
 *      Author: bt
 */
#include <stdint.h>

/*
 * @param - none
 * @retval - none
 */
void time_start();

/*
 * @param  none
 * @retval - milliseconds counter
 */
uint32_t time_millis();

/*
 * @param  millis - milliseconds
 * @retval - none
 */
void time_delayBlocking(uint32_t millis);

void SysTick_Handler(void);
