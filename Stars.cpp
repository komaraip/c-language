#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int b,input;
	while(input != 6){
		for(b = 0; b < 30; b++){
			printf("\n"); 
		}
		printf("Stars Pattern Menu :\n");
		printf("1. Left Justified Triangle\n");
	    printf("2. Right Justified Triangle\n");
 	    printf("3. Perfect Triangle\n");
 	    printf("4. Perfect Reverse Triangle\n");
	    printf("5. Perfect Hollowed Triangle\n");
	    printf("6. Close\n");
	    printf("Choose : ");
	    scanf("%d", &input);
	    getchar();
	    
	    if (input == 1){
	    	int a,i,j;
	    	printf("Input value : ");
	    	scanf("%d", &a);
	    	getchar();
            for(i = 0; i < a; i++){
    	        for(j = 0; j <= i; j++){
    		        printf("*");
		        } printf("\n");
	        } printf("Press enter to the menu"); getchar();
		} else if (input == 2){
	    	int a,i,j;
	    	printf("Input value : ");
	    	scanf("%d", &a);
	    	getchar();
            for(i = 0; i < a; i++){
    	        for(j = a-i; j > 1; j--){
    		        printf(" ");
		        }
		        for(j = 0; j <= i; j++){
    		        printf("*");
		        } printf("\n");
	        } printf("Press enter to the menu"); getchar();
		} else if (input == 3){
            int a,i,j;
	    	printf("Input value : ");
	    	scanf("%d", &a);
	    	getchar();
            for(i = 0; i < a; i++){
    	        for(j = a-i; j > 1; j--){
    		        printf(" ");
		        }
		        for(j = 0; j <= i; j++){
    		        printf("* ");
		        } printf("\n");
	        } printf("Press enter to the menu"); getchar();
		} else if (input == 4){
            int a,i,j;
            printf("Input value : ");
            scanf("%d", &a);
            getchar();
            for(i = 1; i <= a; i++){
                for(j = 1; j < i; j++){
                    printf(" ");
                }
                for(j = 1; j <= (a * 2 - (2 * i - 1)); j++){
                    printf("*");
                } printf("\n");
            } printf("Press enter to the menu"); getchar();
		} else if (input == 5){
            int a,i,j;
            printf("Input value : ");
            scanf("%d", &a);
            getchar();
            for(i = 1; i <= a; i++){
                for(j = i; j < a; j++){
                    printf(" ");
                }
                for(j = 1; j <= (2 * i - 1); j++){
                    if(i == a || j == 1 || j == (2 * i - 1)){
                    printf("*");
                    } else {
                        printf(" ");
                    }
                } printf("\n");
            } printf("Press enter to the menu"); getchar();
		} else if (input > 6){
			printf("Wrong Number");
		} else {
			printf("Good Bye");			
		} 
	}
	
	return 0;
}
