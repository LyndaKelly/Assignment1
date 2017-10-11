/* Author: Lynda Kelly
File: CrazyRandomSword.cpp
Created Wednesday, October 11th, 2017*/

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	int armorIgnore = rand() % (armor / 2);
	double damage = hitPoints - armorIgnore;
	if (damage < 0)
		damage = 0;
	return 0;
}

