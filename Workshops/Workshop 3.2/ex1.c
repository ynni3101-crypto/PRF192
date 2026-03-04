#include <stdio.h>
// Tính số ngày trong tháng
int is_leap_year(int year){
    if (year%400==0||(year%4==0&&year%100!=0))
        return 1;
    return 0;
}

void get_days_in_month(int month, int year){
	switch(month){	
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31\n");
			break;
		case 2:
			if(is_leap_year(year))
				printf("29\n");
			else
				printf("28\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("30\n");
			break;
		default: 
			printf("Khong hop le!!!\n");
	}
}

int main(){
	int month,year;
	scanf("%d %d",&month,&year);
	get_days_in_month(month,year);
}
