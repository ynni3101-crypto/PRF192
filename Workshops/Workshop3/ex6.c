#include <stdio.h>
void doinhiphan(int n){
	do{
		doinhiphan(n/2);
		printf("%d",n%2);
		break;
	}while(n>0);
}
int main(){
	int n;
	printf("Nhap n: ");
	if(scanf("%d",&n)!=1||n<=0||n>1000){
		printf("Nhap sai!!!\n");
		fflush(stdin);
	}
	else if(n==0)
		printf("0");
	else doinhiphan(n);
	return 0;
}