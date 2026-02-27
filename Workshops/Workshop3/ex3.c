#include <stdio.h>

int main (){
	int n;
	printf("Nhap n: ");
	for(;scanf("%d",&n)!=1||n<1||n>10;){
			printf("Nhap lai n: ");
			fflush(stdin);		
	}
	for(int i=1; i<=n; i++){
			printf("%d ",i);
	}
	printf("\n");
	for(int i=1; i<=10; i++){
		printf("%d x %d = %d\n",n,i,n*i);
	}
	return 0;
}