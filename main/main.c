#include <stdio.h>

void main() {
    int Kwh = 0;
    float tiendien = 0;

    printf("So Kwh su dung: ");
    scanf("%d", &Kwh);

    if (Kwh >= 401) {
        tiendien = (50 * 1.678) + (50 * 1.734) + (100 * 2.014) + (100 * 2.536) + (100 * 2.834) + ((Kwh - 400) * 2.927);
        printf("Gia: 2.927 VND/1KWh\n");
    }
    else if (Kwh >= 301) {
        tiendien = (50 * 1.678) + (50 * 1.734) + (100 * 2.014) + (100 * 2.536) + ((Kwh - 300) * 2.834);
        printf("Gia: 2.834 VND/1KWh\n");
    }
    else if (Kwh >= 201) {
        tiendien = (50 * 1.678) + (50 * 1.734) + (100 * 2.014) + ((Kwh - 200) * 2.536);
        printf("Gia: 2.536 VND/1KWh\n");
    }
    else if (Kwh >= 101) {
        tiendien = (50 * 1.678) + (50 * 1.734) + ((Kwh - 100) * 2.014);
        printf("Gia: 2.014 VND/1KWh\n");
    }
    else if (Kwh >= 51) {
        tiendien = (50 * 1.678) + ((Kwh - 50) * 1.734);
        printf("Gia: 1.734 VND/1KWh\n");
    }
    else if (Kwh >= 0) {
        tiendien = Kwh * 1.678;
        printf("Gia: 1.678 VND/1KWh\n");
    }
    else {
        printf("So Kwh khong hop le!\n");
    }
    printf("Tong tien: %.2f VND\n", tiendien);
}
