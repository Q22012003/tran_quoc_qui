#include<stdio.h>
#include "Mang.h"


void main() {
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	int a = 1;
	int b = 2;

	printf("tong mang: %d", tong_arr(A, 10));
	printf("\n");
	Value_le_arr(A, 10);
	so_nguyen_to(A, 10);
	so_lon_nhat_arr(A, 10);
	hoan_vi(a, b);
	mang_tang_dan(A, 10);

}