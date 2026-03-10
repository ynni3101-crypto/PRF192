#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
    //@STUDENT: WRITE YOUR CODE HERE
   if(n<2) return 0;
   for(int i=2;i<=sqrt(n);i++){
   		if(n%i==0) return 0;
   }
   return 1;   
}

// Function to count prime number numbers in an array
void printPrimes(int arr[], int size) {
    //@STUDENT: WRITE YOUR CODE HERE
	int found=0;
   for(int i=0;i<size;i++){
   		if(isPrime(arr[i])){
		   
   			printf("%d ",arr[i]);
   			found=1;
  		}
   	}
   if(found==0) printf("Not found");
}

int main() {
  system("cls");
  
  // Fixed Do not edit anything here.
  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, invalid=0;
  if(scanf("%d",&n)!=1||n<=0)
  		invalid=1;
	
  int a[n];
  for(int i=0;i<n;i++)
  		scanf("%d",&a[i]);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	if(invalid==1){
  		printf("invalid input");
  		return 0;
	}
	printPrimes(a,n);  
  // Fixed Do not edit anything here. 
  printf("\n");
  system ("pause");
  return(0);
}