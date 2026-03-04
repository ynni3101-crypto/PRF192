#include <stdio.h>
#include <math.h>
//Tìm số nguyên tố trong khoảng [a, b]
int is_prime(int n){
		if(n<2) 
			return 0;
		if(n==2) 
			return 1;
		if(n%2==0) 
			return 0;
		for(int i=3;i<=sqrt(n);i+=2){
			if(n%i==0) 
				return 0;		
		}
		return 1;
}

int main(){
	int a,b;
	printf("Nhap a, b: ");
	while(scanf("%d %d",&a,&b)!=2||a<=0||b<=0){
		printf("Nhap lai a, b: ");
		while(getchar()!='\n');
	}
	printf("So ngto trong [%d, %d]: ",a,b);
	
	int i=a;
	while(i<=b){
		if(i!=2&&i%2==0){
			i++;
			continue;
		}
		if(is_prime(i))
			printf("%d ",i);
		i++;
	}
	return 0;
}