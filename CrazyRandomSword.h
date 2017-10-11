/* Author: Lynda Kelly
   File: CrazyRandomSword.h
   Created Wednesday, October 11th, 2017*/

#include "Weapon.h"
#include <cstdlib>

#ifndef CRAZYRANDOM_H
#define CRAZYRANDOM_H

class CrazyRandomSword : public Weapon {
public: 
	CrazyRandomSword() : Weapon("Crazy Random Sword", randomNumber){
		srand(time(NULL));
		double randomNumber = rand() % 91 + 10;
	}
	virtual ~CrazyRandomSword() {}
	virtual double hit(double armor);

};


#endif
