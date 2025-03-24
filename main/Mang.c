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