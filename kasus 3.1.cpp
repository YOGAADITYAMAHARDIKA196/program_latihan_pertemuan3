#include <iostream>
#include <conio.h>
using namespace std;
//class mencari bilangan terbesar;
class Kelas {
	friend ostream& operator << (ostream&, const Kelas&);
	friend istream& operator >> (istream&, Kelas&);
	
public:
	void terbesar() {
		if (A > B) {
			hasil = A;
		} else {
			hasil = B;
		}
	}
	
private:
	int A, B, hasil;
	
};

istream& operator >> (istream& in, Kelas& inp) {
	cout << "Bilangan Pertama: ";
	in >> inp.A;
	cout << "Bilangan Kedua: ";
	in >> inp.B;
}

ostream& operator << (ostream& out, const Kelas& outp) {
	out << "\nBilangan Terbesar = " << outp.hasil;
}

main() {
	Kelas n;
	cin >> n;
	n.terbesar();
	cout << n;
	
	getch();
}
