#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Game doan so
void play_game(){
    srand(time(NULL)); 
    int secret=rand()%100+1;
    int guess;

    printf("7 luot doan.\n");

    for(int i=1;i<=7;i++){
        printf("Luot %d - Nhap so (1-100): ",i);
        scanf("%d", &guess);

        if(guess<1||guess>100){
            printf("Nhap lai.\n");
            i--;   
            continue;
        }

        if(guess==secret) {
            printf("WIN\n");
            break;
        }
        
        if (guess<secret)
            printf("Lon hon\n");
        else
            printf("Nho hon\n");

        if (i==7) {
            printf("LOSE. So dung: %d.\n", secret);
        }
    }
}

int main() {
    play_game();
    return 0;
}