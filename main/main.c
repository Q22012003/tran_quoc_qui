#include<stdio.h>

void main() {
	int n = 0;
	int i = 0;
	int tong = 1;
	printf("moi ban nhap 1 so:");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		tong *= i;
	}
	printf("gia tri giai thua: %d", tong);
}