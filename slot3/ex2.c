#include <stdio.h>
int main(){
	char kt='a',kt2='5';
	printf("%-10s|%-10s|%-10s|%-10s|%-10s|%-10s\n","Ten Bien","Gia tri","Dec","Hex","Oct","Size");
	printf("%-10s|%-10c|%-10d|%-10x|%-10o|%-10d\n","kt",kt,kt,kt,kt,sizeof(kt));
	printf("%-10s|%-10c|%-10d|%-10x|%-10o|%-10d\n","kt2",kt2,kt2,kt2,kt2,sizeof(kt2));
	return 0;
}