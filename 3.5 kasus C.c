#include <stdio.h>

int main(){
	int har;
	
	printf(" \n hari ke : ");scanf("%d",&har);
	
	switch(har) {
			case 1:
				printf("senin");
				break;
			case 2:
				printf("selasa");
				break;
			case 3:
				printf("rabu");
				break;
			case 4:
				printf("kamis");
				break;
			case 5:
				printf("jum'at");
				break;
			case 6:
				printf("sabtu");
				break;
			case 7:
				printf("minggu");
				break;
		}
}
