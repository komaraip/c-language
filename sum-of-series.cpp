#include <stdio.h>
#include <stdlib.h>

int main(){
	
	long int a,b,c;
	scanf("%ld %ld", &a,&b);
	for(int i = a; i <= b; i++){
		c += i;
	} printf("%ld", c);

	return 0;
}
