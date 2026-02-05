#include <stdio.h>
#include <math.h>
int main (){
/*Cach 1: de nhat, ko kt loi khi nhap sai nhap chu	
	float n;	
	printf("Nhap vao n: ");
	scanf("%f",&n);
	while(n<=0||n>1000){				
		printf("Nhap vao n: ");
		scanf("%f",&n);	
	}
	printf("Can bac 2 cua n: %.2f",sqrt(n));*/

//Cach 2
	float n;
	printf("Nhap vao n: ");
	while(scanf("%f",&n)!=1||n<=0||n>1000){
		printf("Nhap lai n: ");
		fflush(stdin); 																		//C1:Xoa vung dem tranh nhap chu																		//while(getchar()!='\n'); //C2
	}
	printf("Can bac 2 cua n: %.2f",sqrt(n));
	return 0;
}