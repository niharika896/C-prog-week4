#include <stdio.h>

int main() {
    int number,i,j,k=1;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for(i = 0; i < number; i++) {
        for(j = 0; j <= i; j++) {
            printf("%d ",k++);
        }
        printf("\n");
    }
    
    return 0;
}

