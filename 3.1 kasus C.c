#include <stdio.h>
using namespace std;
main(){
	int a,b;
	//dalam bentuk bahasa C
	printf("menghitung bilangan tebesar\n");
	printf("=========================================\n");
	
	printf("masukkan angka pertama : ");scanf("%d",&a);
	printf("masukkan angka kedua   : ");scanf("%d",&b);
	if(a>b){
		printf("\nBilangan terbesar adalah : %d \n",a);
	}else{
		if(b>a){
			printf("\nBilangan terbesar adalah : %d \n",b);
		}else{
			printf("\nBilangan 1 dan 2 sama sama besar %d");
		}
	}	
	return 0;
}
