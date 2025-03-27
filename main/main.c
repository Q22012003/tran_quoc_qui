#include<stdio.h>

struct phan_so {
	int tu;
	int mau;
};
typedef struct phan_so phanso;

phanso tru_2phanso(phanso a, phanso b)
{
	int mau = a.mau * b.mau;
	int tu = (a.tu * b.mau) - (b.tu * a.mau);

	phanso cong = { tu,mau };
	return cong;
}




void main()
{
	phanso a = { 2,3 };
	phanso b = { 3,4 };
    
	phanso tru = tru_2phanso(a, b);

	printf("gia tri tu cua ham: %d", tru.tu);
	printf("\ngia tri tu cua ham: %d", tru.mau);

	
	

}