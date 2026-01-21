#include <stdio.h>
#include <math.h>
int main(){
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	int prex=x;
	if(x<0)
		x=-x;
	printf("|%d|=%d\n",prex,x);
	printf("Can bac 2 = %.2f",sqrt(x));
	return 0;
}