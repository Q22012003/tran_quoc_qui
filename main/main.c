#include <stdio.h>

void main() {

    int a = 0, b = 0;

    printf("nhap a: ");
    scanf_s("%d", &a);
    printf("nhap b: ");
    scanf_s("%d", &b);

    if (a > b)
        printf("max: %a", &a);
    else
        printf("max: %b", &b);

}
