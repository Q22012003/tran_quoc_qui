#include<stdio.h>
#include<math.h>
struct phan_so
{
	int tu;
	int mau;
};

typedef struct {
	int tu;
	int mau;
}phan_so_t;


//chuc nang : nhan 2 phan so
//input : 
 //struct phan_so x - phan so thu nhat
// struct phan_so y - phan so thu hai
phan_so_t phan_so (phan_so_t A, phan_so_t  B)
{
	phan_so_t phan_so Q;
	Q.tu = A.tu * B.tu;
	Q.mau = A.mau * B.mau;

	return Q;
	

}

//chuc nang: tim phan so lon nhat trong mang phan so
//input:
// phan_so_t* mang - dia chi bat dau cua mang chua cac phan so
// int so_luong - so luong phan tu trong mang
//output : (phan_so_t) phan so co gia tri lon nhat duoc tim thay

phan_so_t phan_so_lon_nhat(phan_so_t* mang, int a) {
	int i = 0;
	float ketua

	for (i = 0; i < a; i++)
	{
		if ()
		{

		}
	}
}

void main() {
	phan_so_t phan_so A;
	phan_so_t phan_so B;
	phan_so_t mang[] = {
		{1,2},
		{7,4},
		{9,6},
		{1,8},
		{10,9},
	};

	//A.tu = 1;
	//A.mau = 2;

	//B.tu = 1;
	//B.mau = 3;
	//phan_so_t ketqua = phan_so(A, B);

	//phan_so_t = { 1,2 };
	//phan_so_t = { .mau = 3, .tu = 2 };
	//printf("%d", ketqua.tu);
	//printf("\n%d", ketqua.mau);

	
}