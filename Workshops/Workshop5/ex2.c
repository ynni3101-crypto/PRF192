#include <stdio.h>
//in ra chu?i d?o ngu?c
int main(){
	char c[50];
	printf("INPUT:\n");
	fgets(c,sizeof(c),stdin);

	int len=0;
	while(c[len]!='\0'&&c[len]!='\n')
		len++;
		
	printf("\nOUTPUT:\n");
	for(int i=len-1;i>=0;i--)
		printf("%c",c[i]);
		
	return 0;
}