#include <stdio.h>

void main() {

    int a = 0, b = 0, c = 0;

    printf("nhap a: ");
    scanf_s("%d", &a);
    printf("nhap b: ");
    scanf_s("%d", &b);
    printf("nhap c: ");
    scanf_s("%d", &c);

    if (a > b && a > c)
    {
        printf("max: %d", a);
    }
    else if (b > a && b > c)
    {
        printf("max: %d", b);
    }
    else
    
        printf("max: %d", c);
  
    
}
