#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
class persamaan {
	friend ostream& operator << (ostream&, const persamaan&);
	friend istream& operator >> (istream&, persamaan&);
	
public:
	void akar() {
		if (disk == 0){
			x1 = -B/2* A ;
			x2 = x1;
		} else {
			if(disk > 0){
				x1= -B + sqrt(disk)/2*A;
				x2= -B - sqrt(disk)/2*A;
			}else {
				cout<<" akar imajiner "<<disk<<endl;
			}
		}
	}
	
private:
	int A, B,C;
	int disk,x1,x2;
	
};

istream& operator >> (istream& in, persamaan& inp) {
	cout << "Bilangan Pertama: ";
	in >> inp.A;
	cout << "Bilangan Kedua: ";
	in >> inp.B;
	cout << "Bilangan ketiga : ";
	in >> inp.C;
}

ostream& operator << (ostream& out, const persamaan& outp) {
	out  << outp.x1;
	out << outp.x2;
}

main() {
	persamaan n;
	cin >> n;
	n.akar();
	cout << n;
	
	getch();
}
