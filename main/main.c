#include <stdio.h>
#include <math.h>
void main() {
    int a = 0;
    int h = 0;
    int i = 0;
    double tong = 0;

    printf("moi ban nhap chieu dai a : ");
    scanf_s("%d", &a);
    printf("moi ban nhap chieu cao h :");
    scanf_s("%d", &h);

    for (i = 0; i <= 1000; i++)
    {
        double x1 = pow((a + i * h), 2);
        double x2 = pow((a + (i + 1) * h), 2);
        tong += ((x1 + x2) * h) / 2;
    }
    printf("gia tri la: %f", tong);
}






