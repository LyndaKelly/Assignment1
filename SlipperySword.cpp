/* Author: Lynda Kelly
File : SlipperySword.h
Created Wednesday, October 11th, 2017 */

#include "SlipperySword.h"

double SlipperySword::hit(double armor) {
	int hitOrMiss = rand() % 2;				/*Generates a 0 or a 1*/
	double damage;
	if (hitOrMiss == 1) {
		damage = hitPoints - armor;
	}
	else
		damage = 0;

	if (damage < 0)
		damage = 0;
	return damage;
}