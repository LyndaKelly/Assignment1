* Author: Lynda Kelly
File : SlipperySword.h
	Created Wednesday, October 11th, 2017 * /


#include "Weapon.h"
#include <cstdlib>
#ifndef SLIPPERY_H
#define SLIPPERY_H

	class SlipperySword : public Weapon {
	SlipperySword() : Weapon("Slippery Sword", 75.0);
	virtual ~SlipperySword() {};
	virtual double hit(double armor);
};


#endif
