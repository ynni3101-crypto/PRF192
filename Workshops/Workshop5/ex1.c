#include <stdio.h>
//in ra tổng số kí tự trong chuỗi
int main (){
	int count=0;
	printf("INPUT:\n");
	char c[10];
	fgets(c,sizeof(c),stdin);
	
	for(int i=0;c[i]!='\0';i++){
		if(c[i]!='\n')
			count++;
	}
	
	printf("\nOUTPUT:\n");
	printf("%d",count);
	
	return 0;
}