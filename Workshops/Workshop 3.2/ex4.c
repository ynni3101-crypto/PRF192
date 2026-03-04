#include <stdio.h>
//Menu điều khiển máy tính bỏ túi
void show_menu(){
	printf("\n-------MENU-------\n");
	printf("1. +\n2. -\n3. *\n4. /\n0. Thoat\n");
	printf("Chon: ");
}

void processor(int op){
	float a,b;
	switch(op){
		case 1: case 2: case 3: case 4:
		printf("Nhap a, b: ");
		while(scanf("%f %f",&a,&b)!=2){
			printf("Nhap lai a, b: ");
			while(getchar()!='\n');
		}
		break;
	}
	
	switch(op){
		case 1:
			printf("%.2f",a+b);
			break;
		case 2:
			printf("%.2f",a-b);
			break;
		case 3:
			printf("%.2f",a*b);
			break;
		case 4:
			if(b==0)
				printf("Loi!!!");
			else
				printf("%.2f",a/b);
			break;
		case 0:
			printf("Thoat.");
			break;
		default : 
			printf("Khong hop le!!!");
	}
}

int main(){
	int op;
	do{
		show_menu();
		scanf("%d",&op);
		
		processor(op);
	}while(op!=0);
	
	return 0;
	
}