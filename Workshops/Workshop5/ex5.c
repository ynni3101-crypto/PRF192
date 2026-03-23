#include <stdio.h>
//replace kí tự
int main(){
	char s[100];
	printf("INPUT:\n");
	fgets(s,sizeof(s),stdin);
	
	char found,re;
	int count=0;
	
	scanf(" %c",&found);
	scanf(" %c",&re);
	
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==found){
			
			s[i]=re;count++;
		}
	}
	
	printf("\nOUTPUT:\n%d\n%s",count,s);

	return 0;
		
	
}