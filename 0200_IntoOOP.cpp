#include <iostream>
using namespace std;

class Mahasiswa {
public: // aksess modifer
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}
};

class Matakuliah {
private:
	string kodeMk;
	string kodeMk;
	int sks;
};