#include <stdio.h>

int main() {
    int number,i,j;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for(i = 0; i < number; i++) {
        for(j = 0; j <= i; j++) {
            printf("%d",i+1);
        }
        printf("\n");
    }
    
    return 0;
}

