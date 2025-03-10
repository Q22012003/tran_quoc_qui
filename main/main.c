#include <stdio.h>

void main() {
    int n = 0;
    int matkhau = 0;
    int error = 0;
    int money = 0;
    switch (n)
    {
    case 0:
    {
        printf("moi ban nhap mat khau: ");
        scanf_s("%d", &matkhau);
        while (error < 3) {
            if (matkhau == 1234) {
                n=1;
                break;
            }
            else {
                error++;
                if (error < 3) {
                    printf("Sai mat khau! Moi ban nhap lai lan %d: ", error);
                    scanf_s("%d", &matkhau);
                }
            }
        }
    }
    
    case 1:
    {
        do {
            printf("moi ban nhap so tien can rut: ");
            scanf_s("%d", &money);
            if (money > 100000)
            {
                printf("so tien qua lon moi ban nhap lai\n");
            }
        } while (money > 100000);
            n = 2;
            break;
        }
    case 2:
    {
        printf("so tien ban can rut la: %d ", money);
        break;
    }
    }
    }

