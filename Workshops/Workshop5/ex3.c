#include <stdio.h>
//Kiểm tra chuỗi Đối xứng (Palindrome)
int main(){
	char s[100];
	printf("INPUT:\n");
	scanf("%s",&s);
	int len=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]!='\n')
			len++;
	}
	
	int Pal=1;
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-1-i]){
			Pal=0;
		}
	}
	printf("\nOUTPUT:\n");
	if(Pal==0)
		printf("No");
	else
		printf("Yes");
		
	return 0;
}