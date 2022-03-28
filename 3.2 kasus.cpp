#include <stdio.h>
using namespace std;

int main(){
	int a,b,c;
	//dalam bentuk bahasa C
	printf("menghitung bilangan tebesar\n");
	printf("=========================================\n");
	
	printf("masukkan angka pertama : ");scanf("%d",&a);
	printf("masukkan angka kedua   : ");scanf("%d",&b);
	printf("masukkan angka ke tiga : ");scanf("%d",&c);
	if(a>b && a>c){
		printf("\nBilangan terbesar adalah : %d \n",a);
	}else{
		if(b>a && b>c){
			printf("\nBilangan terbesar adalah : %d \n",b);
		}else{
			printf("\nBilangan terbesar adalah : %d \n",c);
		}
	}	
	return 0;
}
