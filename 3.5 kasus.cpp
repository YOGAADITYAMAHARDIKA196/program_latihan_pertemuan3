#include <iostream>
#include <conio.h>

using namespace std;

class hari {
	friend ostream& operator<<(ostream&, const hari&);
	friend istream& operator>>(istream&, hari&);
	
public:
	void konversi() {
		switch(har) {
			case 1:
				hasil = "Senin";
				break;
			case 2:
				hasil = "Selasa";
				break;
			case 3:
				hasil = "Rabu";
				break;
			case 4:
				hasil = "Kamis";
				break;
			case 5:
				hasil = "Jum'at";
				break;
			case 6:
				hasil = "Sabtu";
				break;
			case 7:
				hasil = "Minggu";
				break;
		}
	}
	
private:
	int har;
	string hasil;
	
};

istream& operator>>(istream& in, hari& inp) {
	cout << "Hari ke-";
	in >> inp.har;
}

ostream& operator<<(ostream& out, const hari& outp) {
	out << "\nHari ke-" << outp.har << " adalah hari " << outp.hasil;
}

int main() {
	hari h;
	cin >> h;
	h.konversi();
	cout << h;
	getch();
	return 0;
}
