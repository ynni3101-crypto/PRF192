#include <stdio.h>
#include <stdlib.h>


int nhapInt(){
    int x;
    while(1){
        if(scanf("%d",&x)==1){
            return x;
        }
        printf("Nhap lai: ");
        fflush(stdin);
        while(getchar()!='\n');
    }
}

int menu() {
    int choice;
    printf("\n---- MENU ----\n");
    printf("1. Add a value\n2. Search a value\n3. Remove the first existence of a value\n4. Remove all existences of a value\n5. Print out the array\n6. Print out the array in ascending order\n7. Print out the array in descending order\nOthers- Quit\n");
    printf("Nhap lua chon: ");
    choice=nhapInt();
    return choice;
}

void addValue(int a[],int *n,int value){
	if(*n>=100){
		printf("Mang full.\n");
		return;
	}
	a[*n]=value;
	(*n)++;	
}

int searchValue(int a[],int n,int value){
	for(int i=0;i<n;i++){
		if(a[i]==value) return i;
	}
	return -1;
}

void removeFirst(int a[],int*n,int value){
	int pos=searchValue(a,*n,value);
	if(pos==-1){
		printf("Khong tim thay gtri.\n");
		return;
	}
	for(int i=pos;i<*n-1;i++){
		a[i]=a[i+1];
	}
	(*n)--;
}

void removeAll(int a[],int *n,int value){
	int j=0;
	for(int i=0;i<*n;i++){
		if(a[i]!=value){
			a[j]=a[i];
			j++;
		}
	}
	if(j==*n){
		printf("Khong co gtri can xoa.\n");
	}
	*n=j;
}

void printArray(int a[],int n){
	if(n==0){
		printf("Mang rong.\n");
		return;
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
}

void printAscending(int a[],int n){
	int b[100];
    for (int i=0;i<n;i++) 
		b[i]=a[i];
   
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (b[i]>b[j]){
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printArray(b,n);
}

void printDescending(int a[],int n){
	int b[100];
    for(int i=0;i<n;i++)
		b[i]=a[i];

    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (b[i]<b[j]){
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printArray(b, n);
}

void ch(int choice,int a[],int *n){
    int value, pos;

    if(choice>=1&&choice<=4){
        printf("Nhap gia tri: ");
        value=nhapInt();
    }

    switch(choice){
        case 1:
            addValue(a,n,value);
            break;
        case 2:
            pos = searchValue(a,*n,value);
            if(pos==-1) printf("Khong tim thay.\n");
            else printf("Tim thay tai vi tri %d\n",pos);
            break;
        case 3:
            removeFirst(a,n,value);
            break;
        case 4:
            removeAll(a,n,value);
            break;
        case 5:
            printArray(a,*n);
            break;
        case 6:
            printAscending(a,*n);
            break;
        case 7:
            printDescending(a,*n);
            break;
        default:
            printf("Thoat chuong trinh...\n");
            exit(0);
    }
}

int main() {
    int a[100];
    int n=0;

    while (1){
        int choice=menu();
        ch(choice,a,&n);
    }
    return 0;
}
