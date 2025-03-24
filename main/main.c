#include<stdio.h>
#include "Mang.h"


void main() {
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("tong mang: %d", tong_arr(A, 10));
	printf("\n");
	Value_le_arr(A, 10);
}