#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        for(j = 0; j <= i; j++) {
        	if(j==0){
        		printf("%d",i+1);
			}
			else{
				printf("*%d",i+1);
			};
            
        };
        printf("\n");
    }

    for(i = 0; i < rows; i++) {
        for(j = rows - i; j > 0; j--) {
            if(j==rows-i){
        		printf("%d",rows-i);
			}
			else{
				printf("*%d",rows-i);
			}
        }
        printf("\n");
    }
    
    return 0;
}

