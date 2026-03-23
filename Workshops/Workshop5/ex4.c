#include <stdio.h>
//đếm số từ
int main(){
	char s[100];
	printf("INPUT:\n");
	fgets(s,sizeof(s),stdin);
	
	int count=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]!=' '&&s[i]!='\0'&&s[i]!='\n'&&(i==0||s[i-1]==' ')){  //chỉ đếm khi nó là 1 từ và bắt đầu của 1 từ, bắt đầu của 1 từ là kí tự đầu tiên hoặc trước nó là khoảng cách
			count++;
		}
	}
	
	printf("\nOUTPUT:\n");
	printf("%d",count);
	return 0;
}