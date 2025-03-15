#include<stdio.h>

void main() {
	int n;
	int i = 0;
	

	do {
		printf("\nmoi ban nhap so 0: ");
		scanf_s("%d", &n);
		if (n != 0)
		{
			i++;
		}
		printf("nhap sai lan thu %d: ",i);
	} while (n != 0&&i<5);
}