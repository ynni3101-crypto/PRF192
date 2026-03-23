#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
typedef struct{
	int id;
	char name[100];
	float price;
}Book;
int main() {
  system("cls");
  printf("INPUT:\n");
  int n;
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	
  	printf("Nhap so luong book: ");
  	scanf("%d",&n);

	Book arr[n];  
 	for(int i=0;i<n;i++){
 		printf("Book %d:\n",i+1);
		printf("Nhap ID: "); scanf("%d",&arr[i].id);
		getchar();
		printf("Nhap name: "); fgets(arr[i].name,sizeof(arr[i].name),stdin);
		printf("Nhap gia: "); scanf("%f",&arr[i].price);	
	} 	
//tìm book price lôn nhất
	int maxIndex=0;
	for(int i=1;i<n;i++){
		if(arr[i].price>arr[maxIndex].price){
			maxIndex=i;
		}
	}	
  	
  	printf("Book co price lon nhat:\nID: %d, Name: %s, Price: %.2f\n\n",arr[maxIndex].id,arr[maxIndex].name,arr[maxIndex].price);
//Tim book theo id
	int searchId;
	printf("\nNhap ID can tim: "); scanf("%d",&searchId);
	int found=-1;
	for(int i=0;i<n;i++){
		if(arr[i].id==searchId){
			found=i;
			break;
		}
	}
  	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 	
 	if(found!=-1) printf("Tim thay tai index: %d\n",found);
 	else printf("Not found\n");
 	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
