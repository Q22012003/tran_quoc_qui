#include <stdio.h>
#include <math.h>
void main() {
    int luong = 0;
    int thue = 0;
    int luongchuan = 0;
    printf("nhap luong: ");
    scanf_s("%d", &luong);
    if (luong < 0)
    {
        printf("Nhap du lieu sai");
    }
    else
    {
        if (luong < 10000000)
        {
            thue = luong * 0.1;
            luongchuan = luong - thue;
            printf("thue: %d\nluong chuan: %d", thue, luongchuan);
        }
        else if (luong >= 10000000&& luong<=15000000)
        {
            thue = luong * 0.15;
            luongchuan = luong - thue;
            printf("thue: %d\nluong chuan: %d", thue, luongchuan);
        }
        else {
            thue = luong * 0.2;
            luongchuan = luong - thue;
            printf("thue: %d\nluong chuan: %d", thue, luongchuan);
        }
    }


 }
          
