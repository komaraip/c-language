#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	char name[30], yesOrNo[3] , nameFromFile[35];
	int umur,i;
	FILE *fptr, *data;
	data = fopen("dsadsa.in", "r");
	fscanf(data,"%[^\n]s\n", nameFromFile );
	
	printf("Hai ini siapa ya ?\nCoba masukin namanya : ");
	scanf("%[^\n]s\n", name);
	if(strcmpi(name,nameFromFile) !=0) { 
 		printf("ah ngeboong, %s juga kan :)\n" ,nameFromFile); 
 		printf("dah lanjut aja, sekarang umurnya berapa?\n");
	}
	else{
		printf("hi %s\n", name);
		printf("umurnya sekarang berapa niiii? \n");
	}	
	printf("umur : ");
	scanf("%d", &umur);
	fflush(stdin);
	printf("\ngapapa sih nanya umur, cuma iseng aja. Lupa juga gua umurlu\n");
	printf("sekarang ulang tahun bukan sih ? \n (yes/no):");
	scanf("%[^\n]s\n", yesOrNo);
	fflush(stdin);
	if(strcmp(yesOrNo,"no") == 0){
	
	while(strcmp(yesOrNo,"no") == 0 ){
	fflush(stdin);
	printf("serius dong..\n");
	printf("sekarang ulang tahun bukan sih ? \n (yes/no):");
	scanf("%[^\n]s\n", yesOrNo);
	}
	}
	if(strcmp(yesOrNo,"yes") == 0 ){
		printf("Ecie, mau diucapin berapa kali ?\n Input: ");
	scanf("%d", &i);
	for(int j = 1; j<= i;j++ ){
	printf("HAPPY BIRTHDAY %s !!!\n", nameFromFile);
	
	fptr = fopen("asdasd.in", "r");
	if (fptr == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
    int char1;
	while((char1 = fgetc(fptr)) != EOF){
	printf("%c", char1);
	}
	rewind(fptr);
   	fclose(fptr);
   	sleep(1);
	}
	 
	}
	 system("pause");  
	 
	return 0;
}
