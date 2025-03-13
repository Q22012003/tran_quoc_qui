#include <stdio.h>
#include <math.h>

void main() {
	int arr[10];
	int i = 0;
	int tong = 0;
	for (i = 0; i < 10; i++)
	{
		printf("\nnhap gia tri phan tu thu %d :", i);
		scanf_s("%d", &arr[i]);
		tong += arr[i];
	}

	printf("\ntong i: %d", tong);
}
