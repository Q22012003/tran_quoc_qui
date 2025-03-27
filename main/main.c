#include<stdio.h>

struct phan_so {
	int tu;
	int mau;
};
typedef struct phan_so phanso;

int ucln(int a, int b) {
	while(b!=0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

phanso rutgon_phanso(phanso a)
{
	int value = ucln(a.tu, a.mau);

	a.tu = a.tu / value;
	a.mau = a.mau / value;
	return a;
	
}

void main()
{
	phanso a = { 2,3 };
	phanso b = { 3,4 };
    
	phanso rutgon = rutgon_phanso(a);

	printf("tu: %d", rutgon.tu);
	printf("\nmau: %d", rutgon.mau);

	
	

}