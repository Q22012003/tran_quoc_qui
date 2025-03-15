#include<stdio.h>

void main() {
	int n;
	int i = 0;
	int j = 0;
	int tong = 0;

	printf("\n                                          ========== BANG CUU CHUONG ==========           \n\n");


	for (i = 2; i <= 9; i++) {
		printf("  Bang %d\t", i);
	}
	printf("\n----------------------------------------------------------------------------------------------------------------------\n");
	for (j = 1; j <= 9; j++) {
		for (i = 2; i <= 9; i++) {
			tong = i * j;
			
			printf("%d x %d = %d\t", i, j, tong);
		}
		printf("\n");
	}


	
}