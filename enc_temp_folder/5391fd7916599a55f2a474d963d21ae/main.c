#include <stdio.h>
#include <math.h>

void main() {
    float principal, rate = 8.2, amount;
    int years;

    
    printf("Nhập số tiền gửi ban đầu: ");
    scanf_s("%lf", &principal);

   
    printf("Nhập số năm gửi: ");
    scanf_s("%d", &years);

    rate = rate / 100;


    amount = principal * pow(1 + rate, years);

   
    printf("Số tiền nhận được sau %d năm: %.2lf\n", years, amount);

    
}