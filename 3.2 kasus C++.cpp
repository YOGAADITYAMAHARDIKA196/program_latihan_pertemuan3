#include <iostream>
#include <conio.h>
using namespace std;

class besar {
	friend ostream& operator <<(ostream&, const besar&);
	friend istream& operator >>(istream&, besar&);
	
public:
	void bandingkan(){
		if (A>B && A>C) {
			hasil =A;
		} else {
			if(B>A && B>C){
				hasil =B;
			}
			else{
				hasil =C;
			}
		}
	}
	
private:
	int A, B, C ,hasil;
	
};

istream&operator >> (istream& in, besar& inp) {
	cout<<"Bilangan Pertama: ";
	in>>inp.A;
	cout<<"Bilangan Kedua: ";
	in>>inp.B;
	cout<<" Bilangan ke tiga : ";
	in>>inp.C;
}

ostream& operator << (ostream& out, const besar& outp) {
	out<< "\nBilangan Terbesar = " << outp.hasil;
}

main() {
	besar n;
	cin >> n;
	n.bandingkan();
	cout << n;
	
	getch();
}
