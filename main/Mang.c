#include"Mang.h"

int tong_arr(int mang[],int so)
{
	int i = 0;
	int tong = 0;
	for (i = 0; i < so; i++) {
		tong = tong + mang[i];
	}
	return tong;
}

void Value_le_arr(int mang[], int so)
{
	int i = 0;
	printf("\ntong gia tri mang le :");
	for (i = 0; i < so; i++)
	{
		if (mang[i] % 2 != 0)
		{
			printf("%d", mang[i]);
		}
	}
}

void so_nguyen_to(int mang[], int so) {
	
	int i = 0;
	int j = 0;
	printf("\n cac so nguyen to la: ");
	for (i = 0; i < so; i++) {
		int n = mang[i];
		int isPrime = 1;

		if (n < 2) {
			isPrime = 0;
		}
		else {
			for (j = 2; j * j <= n; j++) {
				if (n % j == 0) {
					isPrime = 0;
					break;
				}
			}
		}

		if (isPrime) printf("%d ", n);
	}
}
void so_lon_nhat_arr(int mang[], int so) {
	int i = 0;
	int max = 0;
	for (i = 0; i < so; i++) {
		if (max <= mang[i]) {
			max = mang[i];
		}
	}
	for (i = 0; i < so; i++) {
		if (max == mang[i]) {
			printf("\nvi tri thu %d la: %d", i,mang[i]);
		}
	}
	
}

void hoan_vi(int a, int b) {
	int temp = b;
	b = a;
	a = temp;
	printf("\nsau khi hoan vi: a=%d va b=%d", a, b);
}
void mang_tang_dan(int mang[], int so) {
	int i = 0;
	int j = 0;
	for (i = 0; i < so; i++)
	{
		int min_index = i;
		for (j = i + 1; j < so; j++)
		{
			if (mang[j] < mang[min_index])
			{
				min_index = j;
			}
			int temp = mang[i];
			mang[i] = mang[min_index];
			mang[min_index] = temp;
		}
	}
	printf("\n");
	for (i = 0; i < so; i++)
	{
		printf("\t%d", mang[i]);
	}
}