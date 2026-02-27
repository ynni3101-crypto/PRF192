#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
	int x,y,sum=0;
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	if(x<y){
		scanf("%d",&x);
		getchar()!='\n';
		scanf("%d",&y);
	}
	if(x>=y)
		return 0;
	for(int i=x;i<=y;i++){
  	if(i%2!=0){
  		sum+=i;
	  }
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("%d",sum);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
