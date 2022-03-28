#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	int disk,x1,x2;
	printf("masukkan angka pertama : \n");
	scanf("%d",&a);
	printf("masukkan angka ke dua  : \n");
	scanf("%d",&b);
	printf("masukkan angka ke tiga : \n");
	scanf("%d",&c);
	
	disk=b*b - 4*a;
	
	if (disk == 0){
		x1= -b/ 2*a;
		printf(" x1 adalah : %d",x1);
		x2=x1;
		printf(" x2 adalah : %d",x2);
	}
	else {
		if(disk > 0){
			x1= -b + sqrt(disk)/2*a;
			printf(" x1 adalah : %d,x1");
			x2= -b - sqrt(disk)/2*a;
			printf("x2 adalah : %d",x2);
		}
		else{
			printf("\n Akar imaginer adadalah : %d",disk);
		}
	}
	return 0;
}


