//thuat toan euclid
#include <stdio.h>
int main(){
	int a,b,sodu;
	printf("Nhap a, b: ");
	while(scanf("%d, %d",&a,&b)!=2){
		printf("Nhap lai a, b: ");
		fflush(stdin);
	}
	while(b!=0){
		sodu=a%b;
		a=b;
		b=sodu;
	}
	printf("UCLN: %d",a);
	return 0;
}