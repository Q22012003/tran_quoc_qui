#include <stdio.h>
#include <math.h>
int main() {
    int a, b;

    
    printf("Nhap A: ");
    scanf_s("%d", &a); 
    printf("Nhap B: ");
    scanf_s("%d", &b);

    // Dùng thuật toán Euclid để tìm ƯCLN bằng cách gán A cho B còn B gán phần dư sau đó đi chia nhau đến khi nào đích đến = 0
    while (b != 0) {            
        int temp = b;              
        b = a % b;
        a = temp;
    }

    // In kết quả
    printf("Uuoc Chung lon nhat : % d\n", a);

    return 0;
}
