#include <stdio.h>
int main() {
	float s,p;
	int w;
	printf("Quang duong di duoc (km): ");
	int kq=scanf("%f",&s);
	if(kq=0||s<=0) {
		printf("Nhapsai");
		return 0;
	}
	if(s<0.5)
		p=12.000;
	else if(0.5<=s&&s<=30)
		p=12.000 + 15.000*(s-0.5);
	else if(s>=31)
		p=12.000+15.000*29.5+12.000*(s-30);
	printf("Thoi gian cho (phut): ");
	kq=scanf("%d",&w);
	if(kq=0||w<0) {
		printf ("Nhapsai.");
		return 0;
	}
	if(w>5)
		p+=1.000*(w-5);
	printf("%-15s|%-15s|%-15s\n","So km","So phut cho","Tong tien");
	printf("%-15.2f|%-15d|%-15.3f\n",s,w,p);
	return 0;

}