/*
 * leds.h
 * (c) 2014 George Louthan
 * 3-clause BSD license; see license.md.
 */

#ifndef LEDS_H_
#define LEDS_H_

#include <stdint.h>

// LED sending types:
#define TLC_SEND_IDLE     0
#define TLC_SEND_TYPE_GS  1
#define TLC_SEND_TYPE_FUN 2
#define TLC_SEND_TYPE_LB  3

// Defines for pins:

// 1-origined because fuck you
#define LED_BANK1_PORT GPIO_PORT_PJ
#define LED_BANK2_PORT GPIO_PORT_PJ
#define LED_BANK3_PORT GPIO_PORT_PJ
#define LED_BANK4_PORT GPIO_PORT_PJ
#define LED_BANK5_PORT GPIO_PORT_P3
#define LED_BANK6_PORT GPIO_PORT_P3

#define LED_BANK1_OUT PJOUT
#define LED_BANK2_OUT PJOUT
#define LED_BANK3_OUT PJOUT
#define LED_BANK4_OUT PJOUT
#define LED_BANK5_OUT P3OUT
#define LED_BANK6_OUT P3OUT

#define LED_BANK1_PIN GPIO_PIN0
#define LED_BANK2_PIN GPIO_PIN1
#define LED_BANK3_PIN GPIO_PIN2
#define LED_BANK4_PIN GPIO_PIN3
#define LED_BANK5_PIN GPIO_PIN7
#define LED_BANK6_PIN GPIO_PIN6

// Defines for the TLC:
#define TLC_LATPORT GPIO_PORT_P1
#define TLC_LATPIN  GPIO_PIN4

typedef struct {
    uint16_t red;
    uint16_t green;
    uint16_t blue;
} rgbcolor_t;

typedef struct {
    int_fast32_t red;
    int_fast32_t green;
    int_fast32_t blue;
} rgbdelta_t;

void init_tlc();

uint8_t tlc_test_loopback(uint8_t);

void tlc_set_gs();
void tlc_set_fun();
void tlc_stage_blank(uint8_t);

extern uint8_t bank;
extern uint8_t bank_brightness[];
extern uint8_t tlc_send_type;

#endif /* LEDS_H_ */
