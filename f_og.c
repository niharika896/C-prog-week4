#include <stdio.h>

int main() {
    int n, i, j, s;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        for(s = 0; s < i; s++) {
            printf(" ");
        }
        for(j = 0; j < 2 * (n - i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

