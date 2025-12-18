/*
 * gpio.h
 *
 *  Created on: Dec 18, 2025
 *      Author: HP
 */

#ifndef GPIO_H
#define GPIO_H


#include <stdint.h>


void gpio_init(void);
uint8_t read_switch(void);
void led_on(void);
void led_off(void);






#endif /* GPIO_H_ */
