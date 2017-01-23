#include "unit.hpp"

//default constructor will be reduced when proper classes will appears
Unit::Unit() {
	army = "none";
	type = "Farmman";
	name = "Billy";
	
	hp_current = 5;
	hp_max = 5;
	movement = 3;
	reach = 1;
	
	position = make_pair(0,0);
	strength = 1;
	accuracy = 1;
	luck = 1;
	resistance = 1;
	defense = 1;
}

//destructors
Unit::~Unit() {}

////////////////////////////////////////////////////////////////////////////////

Footman::Footman()
 :Unit() {
	type = "Footman";
	
	hp_current = 10;
	hp_max = 10;
	position = make_pair(0,0);
	
	strength = 5;
	accuracy = 5;
	luck = 1;
	resistance = 5;
	defense = 5;
}


////////////////////////////////////////////////////////////////////////////////

Knight::Knight()
 : Unit() {
	type = "Knight";
	
	hp_current = 15;
	hp_max = 15;
	position = make_pair(0,0);
	movement = 5;
	strength = 6;
	accuracy = 4;
	luck = 2;
	resistance = 4;
	defense = 4;
}
