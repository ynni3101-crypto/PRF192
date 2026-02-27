#include <stdio.h>
int main(){
	int a,b,sodu;
	printf("Nhap a, b: ");
	scanf("%d, %d",&a,&b);
	do{
		printf("Nhap lai a, b: ");
		fflush(stdin);
	}while(scanf("%d, %d",&a,&b)!=2);
	do{
		sodu=a%b;
		a=b;
		b=sodu;
	}while(b!=0);
	printf("UCLN: %d",a);
	return 0;
}