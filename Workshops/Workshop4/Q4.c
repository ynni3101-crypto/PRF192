#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,invalid=0;
	if(scanf("%d",&n)!= 1)
		invalid=1;
		
	int a[n];
	for(int i=0;i<n;i++){
		if(scanf("%d",&a[i])!=1)
			invalid=1;
	}
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
	if(invalid==1){
  		printf("Invalid input");
  		return 0;
	}
	int found=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0) continue;
		int existed=0;
		for(int j=0;j<i;j++){
			if(a[j]==a[i]){
				existed=1; 
				break;
			}
		}
		if(existed==1)
			continue;
		int count=0;
		for(int j=0;j<n;j++){
			if(a[j]==a[i])
			count++;
		}
		printf("%d-%d\n",count,a[i]);
		found=1;
	}
	if(found==0)
		printf("Not found\n");
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
