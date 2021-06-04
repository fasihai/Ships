#include <iostream>
#include <string>
#include "Ship.hpp"
#include "CruiseShip.hpp"
#include "CargoShip.hpp"
using namespace std;

int main() {

	Ship newship("Titanic", "1909");

	CruiseShip newCruiser("TheQueenMary", "1930", 1000);

	CargoShip newCargo("Panamax", "1950", 250000);

	Ship* ships[3] = {&newship, &newCruiser, &newCargo};

	for(int i = 0; i < 3; i++){

		ships[i]->print();
		cout << "\n";
	}

	cout << "Program ending, bye" << endl; // prints Program ending, bye
	return 0;
}
