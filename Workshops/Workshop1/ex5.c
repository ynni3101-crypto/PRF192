#include <stdio.h>
int main() {
	float soKm,giaTien;
	int soPhutcho;
	printf("Quang duong di duoc (km): ");
	int kq=scanf("%f",&soKm);
	if(kq=0||soKm<=0) {
		printf("Nhap sai!");
		return 0;
	}
	if(soKm<0.5)
		giaTien=12.000;
	else 
		if(0.5<=soKm&&soKm<=30)
			giaTien=12.000 + 15.000*(soKm-0.5);
		else
			giaTien=12.000+15.000*29.5+12.000*(soKm-30);
	printf("Thoi gian cho (phut): ");
	kq=scanf("%d",&soPhutcho);
	if(kq=0||soPhutcho<0) {
		printf ("Nhap sai!");
		return 0;
	}
	if(soPhutcho>5)
		soPhutcho+=1.000*(soPhutcho-5);
	printf("%-15s|%-15s|%-15s\n","So km","So phut cho","Tong tien");
	printf("%-15.2f|%-15d|%-15.3f\n",soKm,soPhutcho,giaTien);
	return 0;

}