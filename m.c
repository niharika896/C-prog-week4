#include <stdio.h>

int main() {
    int number,i,j,s;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for(i = 0; i < number; i++) {
        for(s =0;s<number-i-1;s++) {
            printf(" ");
        };
        for(j=0;j<2*i+1;j++){
        	printf("*");
		};
        printf("\n");
    };
    for(i = 0; i < number-1; i++) {
    	printf(" ");
        for(s = 0; s < i; s++) {
            printf(" ");
        }
        for(j = 0; j < 2 * (number-1- i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

