#include <stdio.h>

void doubleX(int *x){
	x=x+x;
}

void doubleX2(int *x){
	*x=*x+*x;
}

void inputArr(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",i);
	}
}

void outputArr(int a[],int n){
	
}

int isPrime(int n){
	if(i=2) return 1;
	if(i<2) return 0;
	if(i>2&&i%2==0) return 1;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
}

int countPrimes(int a[],int n){
	
}

int main(){
	int n;
	int a[]
}


int main(){
	int x=10;
	double2X(&x);
	printf("Gia tri x= %d",x);
/*	int *p=&x; //con tro ten b tro den 
	printf("Dia chi duoc chua %u: ",p);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);
	//x=x+x
	*p=*p+*p;
	printf("\Gia tri cua x la: %d",x);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);
	printf("\nDia chi duoc chua %u ",p);
	//p tro den y
	int y=5;
	p=&y; //p tro den y
	pritnf("\nDia chi duoc chua %u ",p);
	pritnf("\nGia tri cua vung nho ma p tro den: %d",*p);
	*p=*p+x;
	return 0;
}