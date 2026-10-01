#include <stdio.h>

int main(void){
    int height;
    do {
        printf("Enter height: ");
        scanf("%d",&height);
    } while (height<1 || height>8); // do while condition is true. Is 2 less than 1 or greater than 8? No so loop ends and height =2

    for (int i=0; i<height; i++){
        for (int j=0; j<height-1-i; j++){
            printf(" ");
        }
        for (int k=0; k<i+1; k++){
            printf("#");
        }
        printf("  ");
        for (int j=0; j<i+1; j++){
            printf("#");
        }
        for (int k=0; k<height-1-i; k++){
            printf(" ");
        }
        printf("\n");
    }
}