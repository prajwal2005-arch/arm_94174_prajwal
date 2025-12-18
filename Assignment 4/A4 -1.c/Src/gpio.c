/*
 * gpio.c
 *
 *  Created on: Dec 18, 2025
 *      Author: HP
 */
#include "gpio.h"

/* Base addresses */
#define RCC_BASE        0x40023800
#define GPIOA_BASE      0x40020000
#define GPIOD_BASE      0x40020C00

/* RCC register */
#define RCC_AHB1ENR     (*(volatile unsigned int *)(RCC_BASE + 0x30))

/* GPIOA registers */
#define GPIOA_MODER     (*(volatile unsigned int *)(GPIOA_BASE + 0x00))
#define GPIOA_PUPDR     (*(volatile unsigned int *)(GPIOA_BASE + 0x0C))
#define GPIOA_IDR       (*(volatile unsigned int *)(GPIOA_BASE + 0x10))

/* GPIOD registers */
#define GPIOD_MODER     (*(volatile unsigned int *)(GPIOD_BASE + 0x00))
#define GPIOD_ODR       (*(volatile unsigned int *)(GPIOD_BASE + 0x14))

/* Bit definitions */
#define RCC_GPIOA_EN    (1 << 0)
#define RCC_GPIOD_EN    (1 << 3)

#define SWITCH_PIN     0    // PA0
#define LED_PIN        12   // PD12

void gpio_init(void)
{
    /* Enable GPIOA and GPIOD clock */
    RCC_AHB1ENR |= (RCC_GPIOA_EN | RCC_GPIOD_EN);

    /* PA0 as input */
    GPIOA_MODER &= ~(3 << (SWITCH_PIN * 2));

    /* Enable pull-down for PA0 */
    GPIOA_PUPDR &= ~(3 << (SWITCH_PIN * 2));
    GPIOA_PUPDR |=  (2 << (SWITCH_PIN * 2));

    /* PD12 as output */
    GPIOD_MODER &= ~(3 << (LED_PIN * 2));
    GPIOD_MODER |=  (1 << (LED_PIN * 2));
}

unsigned char read_switch(void)
{
    return (GPIOA_IDR & (1 << SWITCH_PIN)) ? 1 : 0;
}

void led_on(void)
{
    GPIOD_ODR |= (1 << LED_PIN);
}

void led_off(void)
{
    GPIOD_ODR &= ~(1 << LED_PIN);
}
/*
 * gpio.c
 *
 *  Created on: Dec 18, 2025
 *      Author: 91824
 */

