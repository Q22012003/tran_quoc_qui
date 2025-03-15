#include<stdio.h>

void main() {
	int n = 0;
	int i = 0;
	int tong = 0;
	printf("moi ban nhap 1 so:");
	scanf_s("%d", &n);

	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			tong += i;
		}


	}
	printf("gia tri tong chan: %d", tong);
}