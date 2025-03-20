#include<stdio.h>
#define MAX 10

//chức năng: nhập mảng
//Input: không
//OUTPUT: không
void InputArray(int *A,int size) {
	int i = 0;

	for (i = 0; i < size; i++)
	{
		printf("nhap gia tri %d:  ",i);
		scanf_s("%d", (A+i));
	}
}

void OutputArray(int *A, int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("\t%d", *(A+i));
	}

}

//ham so sanh tang dan trong mang
//input:mangA , so luong phan tu trong mang A
//output: no
void Tangdan(int *A, int size)
{
	int i, j = 0;
	for (i = 0; i < size; i++) {
		int *min_index = A+i;
		for (j = i + 1; j < size; j++) {
			if (*(A+j) < *min_index) {
				min_index = A+j;
			}
		}
		int temp = *(A+i);
		*(A+i) = *min_index;
		*min_index = temp;

	}
}

void tachten_holot(char*B, int size) {
	while (*B != 0) {
		for (int i = 0; i < size; i++)
		{
			if (*(B+i) == ' ') {

			 }
		}
	}
}

void main() {
	int A[MAX];
	int sizeA = sizeof(A) / sizeof(A[0]);
	char B[] = "TRAN QUOC QUI";
	int sizeB = sizeof(B) / sizeof(B[0]);
	InputArray(A,10);
	Tangdan(A,sizeA);
	OutputArray(A,10);
}
