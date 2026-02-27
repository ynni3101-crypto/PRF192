#include <stdio.h>
int main(){
	int n,i=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	do{
		printf("Nhap n: ");
		fflush(stdin);
	}while(scanf("%d",&n)!=1);
	if(n<0){
		printf("n không phai so chinh phuong");
		return 0;
	}
	do{
		if(i*i==n){
			printf("n la so chinh phuong");
			return 0;
		}
		i++;
	}while(i*i<=n);
	printf("Khong phai so chinh phuong");
	return 0;
}