#include <stdio.h>
#include <math.h>
#define doremon 100
void main() {
	int arr[doremon];
	int i = 0;
	int tong = 0;
	int max = 0;
	int so_luong_doi_tuong = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < so_luong_doi_tuong; i++)
	{
		printf("\nnhap gia tri phan tu thu %d :", i);
		scanf_s("%d", &arr[i]);
		tong += arr[i];
	}
	

	for (i = 0; i < so_luong_doi_tuong; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	
	}
	printf("gia tri %d la max", max);

	for (i = 0; i < so_luong_doi_tuong; i++)
	{
		if (arr[i] == max)
		{
			printf("\nvi tri  %d nay la max ", i);
		}

	}
	

}
