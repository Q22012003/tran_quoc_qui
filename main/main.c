#include<stdio.h>

struct phan_so {
	int tu;
	int mau;
};
typedef struct phan_so phanso;

 phanso tinh_phanso(phanso a, phanso b) {
	phanso tich = { (a.tu * b.tu),(a.mau * b.mau) };
	return tich;
}


void main()
{
	phanso a = { 2,3 };
	phanso b = { 3,4 };
    
	phanso tong = tinh_phanso(a, b);

	printf("gia tri tu cua ham la: %d", tong.tu);
	printf("\ngia tri mau cua ham la: %d", tong.mau);



	
	

}