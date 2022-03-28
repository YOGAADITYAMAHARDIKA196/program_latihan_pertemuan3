#include <stdio.h>

int main(){
	int nilai;
	
	printf("masukkan nilai anda : ");scanf("%d",&nilai);
	if(nilai <= 20){
		printf(" Nilai anda E \n");
	}
	if(nilai <= 40){
		printf(" Nilai anda D \n");
	}
	if(nilai <+ 60){
		printf(" Nilai anda C \n");
	}
	if(nilai <= 80){
		printf(" Nilai anda B \n");
	}
	if(nilai >= 80){
		printf(" Nilai anda A \n");
	}else {
		printf("maaf, masukkan nilai \n");
	}
}
