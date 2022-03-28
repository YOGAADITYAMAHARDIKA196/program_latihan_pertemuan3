#include <iostream>
#include <conio.h>
using namespace std;

class nilai {
	friend ostream& operator<<(ostream&, const nilai&);
	friend istream& operator>>(istream&, nilai&);	
public:
	void konversi(){
		if(A <= 20){
			hasil = 'E';
		}
		 else if(A <= 40){
			hasil = 'D';
		} 
		else if(A <= 60){
			hasil = 'C';
		} 
		else if(A <= 80) {
			hasil = 'B';
		} 
		else {
			hasil = 'A';
		}
	}
	
private:
	int A;
	char hasil;
	
};

istream& operator>>(istream& in, nilai& inp) {
	cout<<"Masukkan Nilai: ";
	in>>inp.A;
}

ostream&operator<<(ostream& out, const nilai& outp) {
	out <<"\nNilai Huruf = " <<outp.hasil;
}

main() {
	nilai tot;
	cin >> tot;
	tot.konversi();
	cout<<tot;
	getch();
}
