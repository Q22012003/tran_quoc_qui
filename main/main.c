	#include <stdio.h>
	#include <math.h>


	void main()
	{
		int kiemtrasonguyento;
		int n = 0;
		int i, j;

		printf("moi nhap so nguyen to: ");
		scanf_s("%d", &n);
		printf("cac so nguyen to nho hon n: %d\n", n);


		for (i = 2; i < n; i++)
		{
			kiemtrasonguyento = 1;
			for (j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					kiemtrasonguyento = 0;
					break;
				}
			}
			
			if (kiemtrasonguyento)
				printf("%d ", i);
		}
		
	}