/*
 * timing_service.c
 *
 *  Created on: Apr 13, 2020
 *      Author: bt
 */
#include "stm32f1xx.h"
#include "timing_service.h"


volatile uint32_t systick_counter = 0;

/*
 * @param  - none
 * @retval - none
 */
void time_start()
{
    // Update SystemCoreClock value
    SystemCoreClockUpdate();
    // Configure the SysTick timer to overflow every 1 ms
    SysTick_Config(SystemCoreClock / (1000));

}

/*
 * @param  none
 * @retval - milliseconds counter
 */
uint32_t time_millis()
{
	return systick_counter;
}

/*
 * @param  millis - milliseconds
 * @retval - none
 */
void time_delayBlocking(uint32_t millis)
{
	millis += systick_counter;
	while(systick_counter < millis);
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
	systick_counter++;
}
