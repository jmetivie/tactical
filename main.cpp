#include <iostream>

using namespace std;

#include "unit.hpp"
#include "battlefield.hpp"
#include "view.hpp"

int main() {
	
	Battlefield battlefield(10,20);
	Footman billy;
	Knight John;
	battlefield.addUnit(billy, 2, 5);
	battlefield.addUnit(John, 7, 1);
	ViewBattlefield::displayBattlefield(battlefield);
	
	return 0;
};
