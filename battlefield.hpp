#ifndef BATTLEFIELD_HPP
#define BATTLEFIELD_HPP

#include <vector>
#include <iostream>

using namespace std;

#include "unit.hpp"

class Battlefield {
	public:
		unsigned int width;
		unsigned int height;		
		vector< vector<unsigned int> > field;
		vector< vector<Unit*> > units;
		vector< vector<bool> > fog;
		
		void init_vectors();
		
	public:
		Battlefield();
		Battlefield(unsigned int _width, unsigned int _height);
		~Battlefield();	
		
		bool addUnit(Unit& unit, unsigned int x, unsigned int y);
};

#endif
