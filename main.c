/*
 * main.c
 *
 *  Created on: 9/13/2022
 *  Author: Shane M, Frank M, Johnathan T, Ali K
 *  Class: ECEN 2440
 *  Version 3.0
 */

#include "gpio.h"


void main(void)
{
    // stop watchdog timer
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

    while(1)
    {
        /* Uncomment one of the line below to run the desired program */
        // gpio_toggle_red_led();
        // gpio_rgb_dance_party();
        stacker_game();
    }
}
