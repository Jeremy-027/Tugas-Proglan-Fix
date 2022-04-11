#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"
 using namespace std;

class mahasiswa : public person {
private:
	string nrp;
	string DPT;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	 vector<float> ips;

public:
	mahasiswa(string id, string nama, int dd, int mm, int yy,
					string nrp, string DPT, int tahunmasuk);

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	 vector<float> getAllIPS();
	string getNRP();

	void setDPT(string DPT);
	string getDPT();

	int getTahunMasuk();
};

#endif
