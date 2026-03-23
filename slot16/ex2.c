//bai 1 nhung chuyen thanh con tro
#include <stdio.h>
#include <stdlib.h>

int isVowel(char c){
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') 
		return 1;
	return 0;	
}

int countVowel(char *s){
	int count=0;
	while(*s!='\0'){
		if(isVowel(*s)) count++;
		s++; //tang contro sang ki tu tiep theo
	}
	return count;
}
int main(){
	char *str;
	str=(char*)malloc(100*sizeof(char));
	printf("Nhap chuoi: ");
	gets(str);
	printf("So luong nguyen am: %d",countVowel(str));
	return 0;
}