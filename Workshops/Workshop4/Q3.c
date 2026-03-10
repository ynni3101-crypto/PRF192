#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	system("cls");
	printf("INPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,flag_invalid=0;
	if(scanf("%d",&n)!=1||n<=0){
		flag_invalid=1; n=0;
	}
	int a[n]; 
		for(int i=0; i<n; i++)
			if(scanf("%d",&a[i])!=1)
				flag_invalid=1;
	

	// Fixed Do not edit anything here.
	printf("OUTPUT:\n");
	if(flag_invalid==1) {
		printf("Invalid input\n");
		return 0;
	}
	
		//sx giảm dần
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i]<a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0; i<n; i++) {
		if(a[i]%2==0)
			printf("%d\n",a[i]);
	}


	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	system ("pause");
	return(0);
}
