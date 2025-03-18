#include <stdio.h>

int main() {
    int A[10];
    int size = sizeof(A) / sizeof(A[0]);
    int i, j;

    // Nhập mảng
    for (i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf_s("%d", &A[i]); // 
    }

    printf("Cac so nguyen to trong mang: ");

    
    for (i = 0; i < size; i++) {
        int n = A[i];
        int isPrime = 1; 

        if (n < 2) {
            isPrime = 0; 
        }
        else {
            for (j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) printf("%d ", n);
    }

    return 0;
}
