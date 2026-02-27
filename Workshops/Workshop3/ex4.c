#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	for(; scanf("%d",&n)!=1; ){
		printf("Nhap lai n: ");
		fflush(stdin);
	}
	for(; n!=0; n/=10){
		printf("%d",n%10);	
	}
return 0;
}