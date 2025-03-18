#include<stdio.h>

void main()
{
	int A[10];
	int i = 0;
	int tong = 0; 

	for (i = 0; i < 10; i++)
	{
		printf("nhap phan tu thu %d: ",i);
		scanf_s("%d", &A[i]);
	}
	for (i = 0; i < 10; i++)
	{
		tong += A[i];
		
	}
	printf("\nTong cac phan tu trong mang: %d",tong);
}