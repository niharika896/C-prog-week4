#include <stdio.h>

int main() {
    int number,i,j;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for(i = 0; i < number; i++) {
        for(j =number-i; j>0; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

