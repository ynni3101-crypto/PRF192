#include <stdio.h>
int tongUocso(int n){
	int sum=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0)
			sum+=i;	
	}
	return sum;
}

int nhapInt(){
	int soInt;
	printf("Nhap so int: ");
	while(scanf("%d",&soInt)!=1||soInt<=0){
		printf("Nhap lai so int: ");
		fflush (stdin);
	}
	return soInt;
}

int solonnhat(int a,int b,int c){
	int max=a;
	if (b>max)
		max=b;
	if (c>max)
		max=c;
	
	return max;
}

void nhap3so(int *a, int *b, int *c){
	printf("Nhap 3 so: ");
	while(scanf("%d %d %d",a,b,c)!=3||*a<=0||*b<=0||*c<=0){
		printf("Nhap lai 3 so: ");
		while(getchar()!='\n');
	}
}

void MaASCII(){
	for(int i=65;i<=90;i++)
		printf("%c - %d\n",i,i);
}

int main(){
	int soInt=nhapInt();
	printf("%d\n",tongUocso(soInt));
	
	
	int a,b,c;
	nhap3so(&a,&b,&c);
	printf("%d\n",solonnhat(a,b,c));
	
	MaASCII();
}
