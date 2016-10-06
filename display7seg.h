#ifndef DISPLAY7SEG_H
#define	DISPLAY7SEG_H

#include <unmc_lcd_216.h>
#include <unmc_inout_02.h>
#include <stdbool.h>

#include <xc.h>
#include<delays.h>
#include<stdio.h>
#include <unmc_config_01.h>
#include <unmc_rtcc_01.h>

void clear_Segment();
void on_numbers(short number, bool uni);
void write(short number);

#endif	/* DISPLAY7SEG_H */

