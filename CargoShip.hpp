/*
 * CargoShip.hpp
 *
 *  Created on: May 18, 2020
 *      Author: fasihatiq
 */

#ifndef CARGOSHIP_HPP_
#define CARGOSHIP_HPP_

#include "Ship.hpp"
#include <iostream>
#include <string>
using namespace std;

class CargoShip: public Ship {
public:
	CargoShip();
	virtual ~CargoShip();
	CargoShip(string nameofShip, string makeYear, int limitofTon):Ship(nameofShip, makeYear){

		this->limitofTon = limitofTon;
	}

	void setlimitofTon(int tonCap);
	int getlimitofTon();

	void print(){

		cout << "Name of the Ship: " << getShipName() << "\n";
		cout << "Capacity Limit: " << getlimitofTon() << "\n";
	}

private:

	int limitofTon;

};

#endif /* CARGOSHIP_HPP_ */
