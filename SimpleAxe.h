/* Author: Lynda Kelly
   File: SimpleAxe.h
   Created: Wednesday, October 11th*/



#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/* This class defines the Simple Axe, which has 60 hit points and ignores 
	all armor if armor is greater than 0 and less than 20*/

class SimpleAxe : public Weapon {
public:
	SimpleAxe() : Weapon("Simple Axe", 60.0) {}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);

};

#endif