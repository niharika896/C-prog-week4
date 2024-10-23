#include <stdio.h>

int main(){
	int number,i,j,k=2;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for(i=0;i<number;i++){
    	if(i%2==0){
		for(j=0;j<6;j++){
    		printf("%d",i+1);
    	
		}
		printf("%d\n",k++);	
		}
		else{
			printf("%d",k++);
			for(j=0;j<6;j++){
    		printf("%d",i+1);	
			}
		printf("\n");	
		}
    	
	}
	return 0;
}
