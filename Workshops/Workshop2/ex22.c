#include <stdio.h>
#include <math.h>
int main () {
	float n;
	int dem=1;
	while(1) {
		printf("Nhap n: ");
		while(scanf("%f",&n)!=1||n<=0||n>1000) {
			printf("Nhap lai n: ");
			fflush(stdin);
		}
		printf("Can bac 2 cua n: %.2f\n",sqrt(n));
		dem++;
		if(dem==5) break;
	}
	return 0;
}