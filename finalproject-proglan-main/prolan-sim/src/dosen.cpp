#include <iostream>

#include "include/dosen.hpp"
 using namespace std;


dosen::dosen(string id, string nama, int dd, int mm, int yy, string npp, string DPT, string PDDK)
		: person(id, nama, dd, mm, yy), npp(npp), DPT(DPT), PDDK(PDDK)
{
}

void dosen::setPDDK(string PDDK)
{
	this->PDDK = PDDK;
}

string dosen::getPDDK()
{
	return this->PDDK;
}
void dosen::setNPP(string npp)
{
	this->npp =npp;
}

string dosen::getNPP()
{
	return this->npp;
}

void dosen::setDPT(string DPT)
{
	this->DPT = DPT;
}

string dosen::getDPT()
{
	return this->DPT;
}

