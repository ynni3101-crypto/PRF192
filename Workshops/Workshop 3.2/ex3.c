#include <stdio.h>
//Tính lương công nhân theo giờ làm
float calculate_salary(float hours,float rate){
	float salary;
	if(hours<=40)
		salary=hours*rate;
	else
		salary=40*rate+(hours-40)*rate*1.5;
	
	return salary;
}

int main(){
	float hours,rate;
	while(scanf("%f %f",&hours,&rate)!=2,hours<=0||rate<=0){
		printf("Nhap lai:");
		while(getchar!='\n');
	}
		
	printf("%.2f",calculate_salary(hours,rate));
	
	return 0;
}