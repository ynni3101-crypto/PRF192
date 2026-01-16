#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap a, b: ");
	int kq=scanf("%d%d",&a,&b);
	if(kq>0){
		printf("kq ham scanf: %d",kq);
		printf("a= %d, b= %d\n",a,b);}
	else
		printf("SAI!!!");
	printf("Bai tap nhap voi scanf.");
	return 0;
}