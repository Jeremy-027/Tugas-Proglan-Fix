#ifndef __TENDIK_HPP__
#define __TENDIK_HPP__

#include <iostream>
#include "include/person.hpp"
 using namespace std;


class tendik : public person {
private:
	string npp;
	string unit;

public:
	tendik(string id, string nama, int dd, int mm, int yy, string npp, string unit);

	void setUnit(string unit);
	string getUnit();	
	string getNPP();	
};

#endif
