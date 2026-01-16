#include <stdio.h>
int main(){
	float bien;
	printf("Nhap so thuc: ");
	scanf("%f",&bien);
	printf("Gia tri da nhap: %.4f\n",bien);
	int nguyen=(int)bien;
	printf("Phan nguyen la: %d\n",nguyen);
	float thuc=bien-nguyen;
	printf("Phan thuc la: %.4f\n",thuc);
	return 0;
	
}