#include<stdio.h>

void main()
{
	int A[10];
	int i = 0;
	int max = 0;
	int size = sizeof(A)/sizeof(A[0]);

	for (i = 0; i < size; i++)
	{
		printf("nhap phan tu thu %d: ", i);
		scanf_s("%d", &A[i]);
	}
	for (i = 0; i < size; i++)
	{
		printf("\t%d ", A[i]);
	}
	int temp = A[0];
		A[0] = A[1];
		A[1] = temp;
		for (i = 0; i < size; i++)
		{

			printf("%d", A[i]);
		}

}