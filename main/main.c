#include<stdio.h>

void main()
{
	int A[10];
	int i = 0;
	int max = 0;
	int size = sizeof(A)/sizeof(A[0]);
	int j = 0;

	for (i = 0; i < size; i++)
	{
		printf("\nnhap phan tu thu %d: ", i);
		scanf_s("%d", &A[i]);
	}
	for (i = 0; i < size; i++)
	{
		printf("\t%d", A[i]);
	
	}
	for (i = 0; i < size; i++)
	{
		int min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (A[j] < A[min_index])
			{
				min_index = j;
			}
			int temp = A[i];
			A[i] = A[min_index];
			A[min_index] = temp;

		}
	}
	printf("\n");
	for (i = 0; i < size; i++)
	{
		printf("\t%d", A[i]);

	}
	

}