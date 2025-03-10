#include <stdio.h>
#include <math.h>
void main() {

    int a = 0;

    printf("moi ban nhap: ");
    scanf_s("%d", &a);

    if (a > 0) {
        printf("so duong");
    }
    else if (a < 0) {
        printf("so am");
    }
    else
        printf("khong am khong duong");
}

  
    

