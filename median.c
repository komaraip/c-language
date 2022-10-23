#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a,b,c;	
	scanf("%d\n", &a);
	a /= 10; a %= 10;
    printf("%d\n", a);
    
    return 0; 
}
