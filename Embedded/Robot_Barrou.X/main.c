/* 
 * File:   main.c
 * Author: TP_EO_6
 *
 * Created on 16 novembre 2022, 10:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"

int main(void) {

    //Initialisation de l?oscillateur

    InitOscillator();

    // Configuration des entr�es sorties
    InitIO();

    LED_BLANCHE = 1;
    LED_BLEUE = 1;
    LED_ORANGE = 1;

    // Boucle Principale

    while (1) {
        LED_BLANCHE = !LED_BLANCHE;
    } // fin main
}