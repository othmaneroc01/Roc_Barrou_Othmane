/* 
 * File:   timer.h
 * Author: TP_EO_6
 *
 * Created on 16 novembre 2022, 12:01
 */

#ifndef TIMER_H
#define	TIMER_H

void InitTimer23(void);
void InitTimer1(void);
void InitTimer4(void);
void SetFreqTimer1(float freq);
void SetFreqTimer4(float freq);

extern unsigned long timestamp;

#endif	/* TIMER_H */

