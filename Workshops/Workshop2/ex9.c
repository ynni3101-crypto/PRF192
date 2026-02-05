#include <stdio.h>
#include <stdlib.h> //sinh số giả ngẫu nhiên
#include <time.h> //đổi số ngẫu nhiên sau mỗi lần chạy
int main() {
	int songaunhien,sodoan;
	srand(time(NULL));
	songaunhien = rand() % 100 + 1;
	while(sodoan!=songaunhien) {
		printf("Nhap so cua ban: ");
		while(scanf("%d",&sodoan)!=1||sodoan<0||sodoan>100){
			printf("Nhap lai so doan: ");
			fflush(stdin);
		}
		if(sodoan<songaunhien)
			printf("Lon hon\n");
		else if(sodoan>songaunhien)
			printf("Nho hon\n");
		else
			printf("Chinh xac!!!");
	}
	return 0;
}