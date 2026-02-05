#include <stdio.h>

int main (){
	int n,i;
	printf("Nhap n: ");
	while(scanf("%d",&n)!=1||n<1||n>10){
			printf("Nhap lai n: ");
			fflush(stdin);		
	}
	i=1;
	while(i<=n){
			printf("%d ",i);
			i++;
	}
	printf("\n");
	i=1;
	while(i<=10){
	printf("%d x %d = %d\n",n,i,n*i);
	i++;
	}
	return 0;
}
	