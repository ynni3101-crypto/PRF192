#include <stdio.h>
//Tính tiền cước Taxi
int calculate_taxi_fare(float distance){
	int cost=0;
	if(distance==1)
		cost=15000;
	else if(distance>=2&&distance<=30)
		cost=15000+12000*(distance-1);
	else
		cost=15000+12000*29+10000*(distance-30);
	
	return cost;
}

int main(){
	float distance,km;
	printf("Nhap so km di dc: ");
	
	while(scanf("%f",&distance)!=1||distance<=0)
		printf("Nhap lai so km: ");
		fflush(stdin);
	printf("%d",calculate_taxi_fare(distance));
	return 0;
}