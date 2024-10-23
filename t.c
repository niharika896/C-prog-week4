#include <stdio.h>

int main() {
    int start, rows, i, j;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        for(j = 0; j <= i; j++) {
            printf("%d ", start + i);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++) {
        for(j = rows - i; j > 0; j--) {
            printf("%d ", start + rows - i - 1);
        }
        printf("\n");
    }
    
    return 0;
}

