#ifndef VIEW_BATTLEFIELD_HPP
#define VIEW_BATTLEFIELD_HPP

#include <iostream>
#include <list>
#include "unit.hpp"
#include "battlefield.hpp"

class ViewBattlefield{
	public:
		static void displayBattlefield(const Battlefield& battlefield);
};

#endif
