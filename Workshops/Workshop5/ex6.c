#include <stdio.h>
#include <string.h>
//sắp xếp từ theo thứ tự chữ cái đầu
int main(){
	int n;
	char s[10][30];
	char temp[30];
	
	printf("INPUT:\n");
	scanf("%d",&n);
	getchar();

	for(int i=0;i<n;i++){
		fgets(s[i],sizeof(s[i]),stdin);
		s[i][strcspn(s[i],"\n")]='\0';
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(s[i],s[j])>0){
				strcpy(temp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp);
			}
		}
	}
	printf("\nOUTPUT:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
	
	return 0;
}