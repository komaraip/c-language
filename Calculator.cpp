#include <stdio.h>
#include <stdlib.h>

int main(){
	
    char nama[100];
    printf("Masukkan Nama : ");
	scanf("%s", &nama);
	getchar();
	
	int input;
	while(input != 5 ) {
		for (int i=0; i<30; i++){
			printf("\n");
		}
		
		printf("Halo %s, Silahkan Pilih\n", nama);
		printf("1. Penjumlahan\n");
	    printf("2. Pengurangan\n");
 	    printf("3. Perkalian\n");
	    printf("4. Pembagian\n");
	    printf("5. Close\n");
	    printf("Pilih : ");
	    scanf("%d", &input);
	    getchar();
	    
	    if (input == 1){
	    	int a,b;
	    	printf("Masukkan Nilai A : ");
	    	scanf("%d", &a);
	    	getchar();
	    	printf("Masukkan Nilai B : ");
	    	scanf("%d", &b);
	    	getchar();
	    	printf("Hasil : %d\n", a+b);
	    	printf("Tekan enter untuk melanjutkan kalkulator");
	    	getchar();
		} else if (input == 2){
		    int a,b;
	    	printf("Masukkan Nilai A : ");
	    	scanf("%d", &a);
	    	getchar();
	    	printf("Masukkan Nilai B : ");
	    	scanf("%d", &b);
	    	getchar();
	    	printf("Hasil : %d\n", a-b);
	    	printf("Tekan enter untuk melanjutkan kalkulator");
	    	getchar();
		} else if (input == 3){
		    int a,b;
	    	printf("Masukkan Nilai A : ");
	    	scanf("%d", &a);
	    	getchar();
	    	printf("Masukkan Nilai B : ");
	    	scanf("%d", &b);
	    	getchar();
	    	printf("Hasil : %d\n", a*b);
	    	printf("Tekan enter untuk melanjutkan kalkulator");
	    	getchar();
		} else if (input == 4){
		    int a,b;
	    	printf("Masukkan Nilai A : ");
	    	scanf("%d", &a);
	    	getchar();
	    	printf("Masukkan Nilai B : ");
	    	scanf("%d", &b);
	    	getchar();
	    	printf("Hasil : %d\n", a/b);
	    	printf("Tekan enter untuk melanjutkan kalkulator");
	    	getchar();
		} else {
			printf("Bukan Pilihan");			
		}
	}

	return 0;
}

