#include <stdio.h>

int main() {
    int number, i, j, s;
        printf("Enter an integer: ");
        scanf("%d", &number);            
            for(i = 0; i < number; i++) {
                for(j = 0; j < i + 1; j++) {
                    printf("*");
                }
                for(s = 0; s < 2 * (number- i - 1); s++) {
                    printf(" ");
                }
                for(j = 0; j < i + 1; j++) {
                    printf("*");
                }
                printf("\n");
            };
            
            for(i = 0; i < number; i++) {
                for(j = 0; j < number - i; j++) {
                    printf("*");
                }
                for(s = 0; s < 2 * i; s++) {
                    printf(" ");
                }
                for(j = 0; j < number- i; j++) {
                    printf("*");
                }
                printf("\n");
            };
            return 0;
    
    }
    

