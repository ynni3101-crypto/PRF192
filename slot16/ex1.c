#include <stdio.h>
#include <stdlib.h>

int isVowel(char c){
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return 1;
	return 0;	
}

int countVowel(char s[]){
	int count=0;
	for(int i=0;s[i]!='\0';i++){
		if(isVowel(s[i])) count++;
	}
	return count;
}
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	gets(str);
	printf("So luong nguyen am: %d",countVowel(str));
	return 0;
}