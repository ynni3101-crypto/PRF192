#include<stdio.h>
/*Khai bao 1 bien so thuc a,b khoi tao gtri
khai bao bien kq, la kq cua a+b
in a=  b=
in kq a+b=...*/

int main(){
	float a=5,b=10.216,kq;
	printf("a=%.0f\nb=%.3f\n",a,b);
	kq=a+b;
	printf("%.0f+%.3f=%.2f",a,b,kq);
	return 0;	
}