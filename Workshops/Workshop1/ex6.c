#include <stdio.h>
/* 8.5-10 A
7-8.4 B
5.5-6.9 C
4-5.4 D
<4 F */
int main(){
	float diemCC,diemGK,diemCK,diemTK;
	char xeploai;	
	printf("Nhap diem chuyen can: ");
	scanf("%f",&diemCC);
	printf("Nhap diem Giua Ki: ");
	scanf("%f",&diemGK);
	printf("Nhap diem Cuoi Ki: ");
	scanf("%f",&diemCK);
	diemTK=diemCC*0.1+diemGK*0.3+diemCK*0.6;
	if(diemTK>=8.5&&diemTK<=10)
		xeploai='A';
	else if(diemTK>=7&&diemTK<=8.4)
		xeploai='B';
	else if(diemTK>=5.5&&diemTK<=6.9)
		xeploai='C';
	else if(diemTK>=4.0&&diemTK<=5.4)
		xeploai='D';
	else
		xeploai='F';
	printf("--> Xep loai: %c\n",xeploai);
	printf("\n");
	printf("%-20s|%-20s|%-20s|%-20s\n","Diem chuyen can","Diem giua ki","Diem cuoi ki","Diem tong ket");
	printf("%-20.2f|%-20.2f|%-20.2f|%-20.2f\n",diemCK,diemGK,diemCK,diemTK);
	printf("\n");
	if(diemCC>=4.0&&diemGK>=4.0&&diemCK>=4.0&&xeploai!='F')
		printf("Ban du dieu kien Tot Nghiep.\n");
	else 
		printf("Ban khong du dieu kien Tot Nghiep.\n");
	return 0;
}