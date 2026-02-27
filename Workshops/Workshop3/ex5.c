#include <stdio.h>

int main() {
	int n, tong = 0;
	printf("Nhap n: ");
	for (;;) {
		while (scanf("%d", &n)!= 1||n<0) {
			printf("Nhap lai n: ");
			while (getchar()!='\n');
		}
		if (n==0) break;
		tong += n;
		printf("Nhap tiep n: ");
	}
	printf("Tong cac so n: %d", tong);
	return 0;
}