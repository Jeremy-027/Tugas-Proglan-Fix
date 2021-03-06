#include <iostream>
#include <vector>
#include <stdlib.h>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

 using namespace std;;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;
    int idMhs = 0;
    int idDosen = 0;
    int idTendik = 0;

	while(1) {
		cout << "Selamat datang di Institut Teknologi Sepuluh Nopember" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
                idMhs++;
               string id, nama, nrp, DPT;
                int dd, mm, yy, tahunmasuk;
                id = idMhs;
                cout << "Masukkan Nama Lengkap Mahasiswa : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Tanggal Lahir : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir : ";
                cin >> yy;
                cout << "Masukkan NRP : ";
                cin >> nrp;
                cout << "Masukkan Departemen : ";
                cin.ignore();
                getline(cin, DPT);
                cout << "Masukkan Tahun Masuk : ";
                cin >> tahunmasuk;
                mahasiswa inputMhs = mahasiswa(id, nama, dd, mm, yy, nrp, DPT, tahunmasuk);
                recMhs.push_back(inputMhs);
            }
				break;
			case 2: {
				idDosen++;
               string id, nama, npp, DPT,PDDK;
                int dd, mm, yy;
                id = idDosen;
                cout << "Masukkan Nama Dosen : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Tanggal Lahir : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir : ";
                cin >> yy;
                cout << "Masukkan NPP : ";
                cin >> npp;
                cout << "Masukkan DPT : ";
                cin.ignore();
                getline(cin, DPT);
                cout << "Masukkan PDDK : ";
                cin.ignore();
                getline(cin, PDDK);
                dosen inputDosen = dosen(id, nama, dd, mm, yy, npp, DPT, PDDK);
                recDosen.push_back(inputDosen);
			}
				break;
			case 3:{
				idTendik++;
               string id, nama, npp, unit;
                int dd, mm, yy;
                id = idTendik;
                cout << "Masukkan Nama Tendik : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Tanggal Lahir : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir : ";
                cin >> yy;
                cout << "Masukkan NPP : ";
                cin >> npp;
                cout << "Masukkan Unit : ";
                cin.ignore();
                getline(cin, unit);
                tendik inputTendik = tendik(id, nama, dd, mm, yy, npp, unit);
                recTendik.push_back(inputTendik);
			}

				break;
			case 4:{
                for(int i = 0; i < idMhs; i++){
                    cout << "Nama Mahasiswa :" << recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir  :" << recMhs[i].getTglLahir() <<  "/"<<recMhs[i].getBulanLahir()<< "/" << recMhs[i].getTahunLahir() <<endl;
					cout << "NRP            :" << recMhs[i].getNRP() << endl;
					cout << "DPT     :" << recMhs[i].getDPT() << endl;
					cout << "Tahun Masuk    :" << recMhs[i].getTahunMasuk() << endl;
                }
            }
				break;
			case 5:{
				  for(int i = 0; i < idDosen; i++){
                    cout << "Nama Dosen     :" << recDosen[i].getNama() << endl;
                    cout << "Tanggal Lahir  :" << recDosen[i].getTglLahir() <<  "/"<<recDosen[i].getBulanLahir()<< "/" << recDosen[i].getTahunLahir() <<endl;
                    cout << "NPP            :" << recDosen[i].getNPP() << endl;
                    cout << "DPT     :" << recDosen[i].getDPT() << endl;
                    cout << "PDDK     :" << recDosen[i].getPDDK() << endl;
                }
			}
				break;
			case 6:{
				  for(int i = 0; i < idTendik; i++){
                    cout << "Nama Tendik    :" << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir  :" << recTendik[i].getTglLahir() <<  "/"<<recTendik[i].getBulanLahir()<< "/" << recTendik[i].getTahunLahir() <<endl;
					cout << "NPP            :" << recTendik[i].getNPP() << endl;
					cout << "Unit           :" << recTendik[i].getUnit() << endl;
                }
			}
				break; 
		}
	}
}
