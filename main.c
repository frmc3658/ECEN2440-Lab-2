/*
 * main.c
 *
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