/*
 * CruiseShip.hpp
 *
 *  Created on: May 18, 2020
 *      Author: fasihatiq
 */

#ifndef CRUISESHIP_HPP_
#define CRUISESHIP_HPP_

#include "Ship.hpp"
#include <iostream>
#include <string>
using namespace std;

class CruiseShip: public Ship {
public:
	CruiseShip();
	virtual ~CruiseShip();
	CruiseShip(string nameofShip, string makeYear, int totalPassenAllowed) : Ship(nameofShip, makeYear){

		this->totalPassenAllowed = totalPassenAllowed;

	}

	void settotalPassenAllowed(int totalPass);
	int gettotalPassenAllowed();

	void print(){

		cout << "The name of the Ship: " << getShipName() << "\n";
		cout << "Total number of passengers allowed at once: " << gettotalPassenAllowed() << "\n";
	}

private:

	int totalPassenAllowed;
};

#endif /* CRUISESHIP_HPP_ */
