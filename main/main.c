#include <stdio.h>

void main()
{
	float diem = 0;
	printf("moi ban nhap: ");
	scanf_s("%f", &diem);

	if (diem > 8)
	{
		printf("gioi");
	}
	else if (diem >= 6.5 && diem < 8)
	{
		printf("kha");
	}
	else if (diem >= 5.0 && diem < 6.5)
	{
		printf("trung binh");
	}
	else
	{
		printf("yeu");
	}
}
