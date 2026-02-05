#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	while(scanf("%d",&n)!=1){
		printf("Nhap lai n: ");
		fflush(stdin);
	}
	while(n!=0)
	{
		printf("%d",n%10);
		n/=10;
	}
return 0;
}
