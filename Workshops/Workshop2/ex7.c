#include <stdio.h>
int main(){
	int n,i=0;
	printf("Nhap n: ");
	while(scanf("%d",&n)!=1){
		printf("Nhap lai n: ");
		fflush(stdin);
	}
	if(n<0){
		printf("n không phai so chinh phuong");
		return 0;
	}
	while(i*i<=n){
		if(i*i==n){
			printf("n la so chinh phuong");
			return 0;
		}
		i++;
	}
	printf("Khong phai so chinh phuong");
	return 0;
}