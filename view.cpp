#include "view.hpp"

void ViewBattlefield::displayBattlefield(const Battlefield& battlefield) {
	
	list<Unit*> units;
	for (unsigned int y = 0 ; y < battlefield.height ; y++) {
		for (unsigned int x = 0 ; x < battlefield.width ; x++) {
			cout << "[" << battlefield.field[y][x] << "|" << battlefield.fog[y][x] << "|";
			if (battlefield.units[y][x]) {
				cout << (units.size()+1);
				units.push_back(battlefield.units[y][x]);
			} else cout << " ";
			cout << "]";
		}
		cout << endl;
	}
	for (Unit* unit: units) cout << *unit << endl;
}
