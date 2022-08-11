#include <stdio.h>
#include <conio.h>

int main(){
    int teacher[10];
    int i;
    printf("Enter teacher ids");
    for(i=0; i<5; i++){
        scanf("%d", &teacher[i]);
        fflush(stdin); 
    }
    printf("\n Scanning done. \n");
    getchar();
    printf("Teacher IDs are:\n");
    for(i=0; i<5; i++){
        printf("%d \n", teacher[i]);
    }
    return 0;
}