#include <stdio.h>
int main(){
	int a,b;
	char pheptoan;
	float kq;
	scanf("%d,%d",&a,&b);
	scanf(" %c",&pheptoan);
	switch(pheptoan){
		case '+':
			kq=a+b;
			break;
		case '-':
			kq=a-b;
			break;
		case '*':
			kq=(int)a*b;
			break;
		case '/':
			if(b==0){
			 	printf("Khong the chia cho 0!!!"); 
				return 0;}
			kq=(float)a/b;
			printf("%d %c %d = %.2f",a,pheptoan,b,kq);
			return 0;
		case '%':
			if(b==0){
			 	printf("Khong the chia cho 0!!!");
				return 0;}
			kq=a%b;
			printf("%d %c %d = %d",a,pheptoan,b,a%b);
			return 0;
		default:
			printf("Nhap sai!!!!");
			break;
	}
	printf("%d %c %d = %.0f",a,pheptoan,b,kq);
	return 0;
}