#include<stdio.h>

struct phan_so
{
	int tu;
	int mau;
};
//chuc nang : nhan 2 phan so
//input : 
 //struct phan_so x - phan so thu nhat
// struct phan_so y - phan so thu hai
struct phan_so nhan_hai_phanso(struct phan_so A, struct phan_so B)
{
	struct phan_so Q;
	Q.tu = A.tu * B.tu;
	Q.mau = A.mau * B.mau;

	return Q;
	

}


void main() {
	struct phan_so A;
	struct phan_so B;

	A.tu = 1;
	A.mau = 2;

	B.tu = 1;
	B.mau = 3;
	struct phan_so ketqua = nhan_hai_phanso(A, B);

	printf("%d", ketqua.tu);
	printf("\n%d", ketqua.mau);

	
}