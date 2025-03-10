#include <stdio.h>
#include <math.h>
void main() {

    float a = 0, b = 0, c = 0;
    float delta = 0;
    float x1=0, x2 = 0;

    printf("nhap a: ");
    scanf_s("%f", &a);
    printf("nhap b:");
    scanf_s("%f", &b);
    printf("nhap c:");
    scanf_s("%f", &c);

    if (a == 0)
    {
        if (b == 0)
            printf("phuong trinh vo nghiem");
        else
            printf("phuong trinh co 1 nghiem duy nhat: %f ", (-c / b));
     }

    else
      {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1=%f\n", x1);
            printf("x2=%f\n", x2);
        }
        else if (delta == 0) {
            x1 = (-b) / (2 * a);
            printf("nghiem kep x= %f", x1);
        }
        else
            printf("phuong trinh vo nghiem");
      }

  
    
}
