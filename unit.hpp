#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>

using namespace std;

typedef unsigned int Stats;
typedef pair<unsigned int, unsigned int> Position;

///This class is an absctract class to regroup attributes and method of basic unit
class Unit {
	//sould be protected but i am too lazy to do all the accessors
	public:
		string army;
		string type;
		string name;
		Stats hp_current;
		Position position;
	
		//cant increase
		Stats movement;
		Stats reach;
		
		
		//can increase on level up
		Stats hp_max;
		Stats strength;
		Stats accuracy;
		Stats luck;
		Stats defense;
		Stats resistance;
	
	public:
		Unit();
		~Unit();
		
		friend std::ostream& operator<<(std::ostream& out, const Unit& u) {
			string displaying = "";
			displaying += u.name;
			displaying += "[";
			displaying += u.type;
			displaying += "|";
			displaying += u.army;
			displaying += "]";
			return out << displaying;
		}
};

class Footman : public Unit {
	public:
		Footman();
		~Footman() {}
};

class Knight : public Unit {
	public:
		Knight();
		~Knight() {}
};
#endif
