/*
 * ship.hpp
 *
 *  Created on: May 18, 2020
 *      Author: fasihatiq
 */

#ifndef SHIP_HPP_
#define SHIP_HPP_

#include <iostream>
#include <string>
using namespace std;


class Ship {
public:
	Ship();
	virtual ~Ship();
	Ship(string nameofShip, string makeYear){

		this->nameofShip = nameofShip;
		this->makeYear = makeYear;

	}

	void setShipName(string n);
	string getShipName();
	void setYearBuild(string y);
	string getYearBuild();

	virtual void print(){

		cout << "Name of the Ship: " << getShipName() << "\n";
		cout << "Year Ship was build: " << getYearBuild() << "\n";
	}

private:

	string nameofShip,
		   makeYear;

};

#endif /* SHIP_HPP_ */
