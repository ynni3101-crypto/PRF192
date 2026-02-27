#include <stdio.h>
int main() {
	int soduTK=10000000,chon,rut;
	for(;1;){
		printf("1. Rut tien\n");
		printf("0. Thoat\n");
		printf("So du hien tai: %d\n", soduTK);
		printf("Chon: ");
		scanf("%d", &chon);
		if(chon==1){
			printf("So tien muon rut: ");
			scanf("%d",&rut);
			if(rut<=0||rut>soduTK)
				printf("Khong hop le!!!\n");
			else{
				soduTK-=rut;
				printf("So du con: %d\n",soduTK);
			}
		}
		else if (chon==0)
			break;
	
		else 
		printf("Lua chon khong hop le!!!\n");
	}
	return 0;
}