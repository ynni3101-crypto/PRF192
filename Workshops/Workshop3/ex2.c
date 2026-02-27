#include <stdio.h>
#include <math.h>
int main (){
	float n;
	for(int count=1; count<=5; count++){
		printf("Nhap vao n: ");
		while(scanf("%f",&n)!=1||n<=0||n>1000){
			printf("Nhap lai n: ");
			fflush(stdin);
		}
		printf("Can bac 2 cua n: %.2f\n",sqrt(n));
	}
	return 0;
}