#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Function to find the largest even number in an array
int findLargestEvenNumber(int arr[], int n){
	//@STUDENT: WRITE YOUR CODE HERE:
	int pos=-1;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			pos=i;	
			break;
		}
	}
	if(pos==-1) return -1;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0&&arr[i]>arr[pos]){
			pos=i;
		}
	}
	return arr[pos];
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  	int n;
  	scanf("%d",&n);
  	int arr[n];
  	for(int i=0;i<n;i++)
  		scanf("%d",&arr[i]);
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	int result=findLargestEvenNumber(arr,n);
  	if(result==-1)
   		printf("There are no even numbers in %d element.",n);
	else
  		printf("%d",result);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}