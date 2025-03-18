#include<stdio.h>

void main()
{
	int A[10];
	int i = 0;
	int max = 0; 
	int n = 0;
	
	for (i = 0; i < 10; i++)
	{
		printf("nhap phan tu thu %d: ",i);
		scanf_s("%d", &A[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (A[i] == max)
		{
			printf("\n%d vi tri nay la max", i);
			printf("\n %d la so lon nhat trong mang", A[i]);
		}
	}
}