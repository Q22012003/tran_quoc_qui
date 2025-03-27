#include<stdio.h>

struct phan_so {
	int tu;
	int mau;
};
typedef struct phan_so phanso;

phanso chia_2phanso(phanso a, phanso b)
{
	phanso chia = { a.tu * b.mau,a.mau * b.tu };
	return chia;
}




void main()
{
	phanso a = { 2,3 };
	phanso b = { 3,4 };
    
	phanso chia = chia_2phanso(a, b);

	printf("gia tri tu cua ham: %d", chia.tu);
	printf("\ngia tri tu cua ham: %d", chia.mau);

	
	

}