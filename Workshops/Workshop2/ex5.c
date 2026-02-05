#include <stdio.h>
int main(){
	int n,tong=0;
	printf("Nhap n: ");
	while(1){
		while(scanf("%d",&n)!=1||n<0){
			printf("Nhap lai n: ");
			fflush(stdin);
		}
		if(n==0) 
			break;
		if(n>0){
			tong+=n;
			printf("Nhap tiep n: ");
		}
	}
	printf("Tong cac so n: %d",tong);
	return 0;
}