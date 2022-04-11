#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"
 using namespace std;


mahasiswa::mahasiswa(string id, string nama, int dd, int mm, int yy, 
				string nrp, string DPT, int tahunmasuk)
		: person(id, nama, dd, mm, yy), nrp(nrp), DPT(DPT), tahunmasuk(tahunmasuk)
{
	this->ipk = 0.0;
	this->semesterke = 1;
	this->skslulus = 0;

	this->ips =  vector<float>(14,0);
}

void mahasiswa::setSemester(int semesterke)
{
	this->semesterke = semesterke;
}

int mahasiswa::getSemester()
{
	return this->semesterke;
}

void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

int mahasiswa::getSKSLulus()
{
	return this->skslulus;
}

void mahasiswa::hitungIPK()
{
}

void mahasiswa::setIPS(int semester, float ips)
{
	// semester mulai dari 1
	if (semester < 15) {
		this->ips[semester-1] = ips;
		this->hitungIPK();
	}
}

float mahasiswa::getIPS(int semester)
{
	if (semester < 15)
		return this->ips[semester-1];

	return -1.0;
}

 vector<float> mahasiswa::getAllIPS()
{
	return this->ips;
}

string mahasiswa::getNRP()
{
	return this->nrp;
}

void mahasiswa::setDPT(string DPT)
{
	this->DPT = DPT;
}

string mahasiswa::getDPT()
{
	return this->DPT;
}

int mahasiswa::getTahunMasuk()
{
	return this->tahunmasuk;
}



