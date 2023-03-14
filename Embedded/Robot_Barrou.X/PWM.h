/*
 * File:   PWM.h
 * Author: TP_EO_6
 *
 * Created on 7 décembre 2022, 15:23
 */

#ifndef PWM_H
#define	PWM_H
#define MOTEUR_DROIT 0
#define MOTEUR_GAUCHE 0

void InitPWM(void);
//void PWMSetSpeed(float vitesseEnPourcents, int motorNumber);
void PWMSetSpeedConsigne( float vitesseEnPourcents, char motor);
void PWMUpdateSpeed(void);


#endif	/* PWM_H */

