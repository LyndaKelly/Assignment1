/* Author: Lynda Kelly
File : SlipperySword.h
	Created Wednesday, October 11th, 2017 */


#include "Weapon.h"
#include <cstdlib>
#ifndef SLIPPERY_H
#define SLIPPERY_H

/* SlipperySword behavior: 75 hit points, but 50/50 chance of user dropping the sword and inflicting no damage.*/

class SlipperySword : public Weapon {
public:

	SlipperySword() : Weapon("Slippery Sword", 75.0) {}
	virtual ~SlipperySword() {};
	virtual double hit(double armor);
};


#endif
