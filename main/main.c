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
		if (A[i]%2==1)
		{
			printf("%d\t", A[i]);
		}
	}
	
}