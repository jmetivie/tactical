#include "battlefield.hpp"

Battlefield::Battlefield() : width(1), height(1) {
	init_vectors();
}

Battlefield::Battlefield(unsigned int _width, unsigned int _height) : width(_width), height(_height) {
	init_vectors();
}

Battlefield::~Battlefield() {
	for (vector<unsigned int>& subfield: field) subfield.clear();
	field.clear();
	for (vector<Unit*>& subunit: units) subunit.clear();
	units.clear();
	for (vector<bool>& subfog: fog) subfog.clear();
	fog.clear();
}

void
Battlefield::init_vectors() {
	field.reserve(height);
	units.reserve(height);
	fog.reserve(height);
	for (unsigned int i = 0 ; i < height ; i++) {
		field.push_back(vector<unsigned int>(width,0));
		units.push_back(vector<Unit*>(width,NULL));
		fog.push_back(vector<bool>(width,false));
	}
}

bool 
Battlefield::addUnit(Unit& unit, unsigned int x, unsigned int y) {
	if (units[y][x]) return false;
	unit.position.first = x;
	unit.position.second = y;
	units[y][x] = &unit;
	return true;
	
}
