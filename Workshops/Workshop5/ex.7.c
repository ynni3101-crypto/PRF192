#include <stdio.h>

int main(){
    char s[200];
    printf("INPUT:\n");
    fgets(s,sizeof(s),stdin);
    int digit=0,letter=0,other=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0'&&s[i]<='9') digit++;
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) letter++;
        else if(s[i]!='\n') other++;
    }
    printf("\nOUTPUT:\n");
    printf("%d\n%d\n%d",digit,letter,other);
    return 0;
}