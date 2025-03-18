#include<stdio.h>

void main()
{
	int A[10];
	int i = 0;
	int tong = 0; 
	int n = 0;
	float trungbinh = 0;
	for (i = 0; i < 10; i++)
	{
		printf("nhap phan tu thu %d: ",i);
		scanf_s("%d", &A[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if ((A[i] % 2) == 1)
		{
			tong = tong + A[i];
			n++;
		}
	}
	trungbinh = tong / n;
	printf("\nTrung binh cac phan tu so le trong mang: %f",trungbinh);
}