/* Lynda Kelly
File: SimpleAxe.cpp
Created Wednesday October 11th, 2017*/

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
	double damage;
	if (armor > 0 && armor < 20)
		damage = hitPoints;
	else
		damage = hitPoints - armor;
	return damage;
}