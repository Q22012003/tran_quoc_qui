#include<stdio.h>

struct phan_so {
	int tu;
	int mau;
};

typedef struct phan_so phanso;

void main()
{
	phanso a;
	printf("nhap tu: ");
	scanf_s("%d", &a.tu);
	printf("nhap mau :");
	scanf_s("%d", &a.mau);

}