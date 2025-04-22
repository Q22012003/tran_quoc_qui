#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ten[50];
    float diem1, diem2, dtb;
} HocSinh;

int soSanhDTB(const void* a, const void* b) {
    float d1 = ((HocSinh*)a)->dtb;
    float d2 = ((HocSinh*)b)->dtb;
    return (d2 > d1) - (d2 < d1);  // Giam dan
}

int main() {
    FILE* f = fopen("D:\\DanhSachHocSinh1.csv", "r");
    if (!f) {
        printf("Khong mo duoc file CSV!\n");
        return 1;
    }

    HocSinh ds[100];
    int n = 0;
    char dong[256];

    while (fgets(dong, sizeof(dong), f)) {
        sscanf(dong, "%[^,],%*d,%*[^,],%f,%f", ds[n].ten, &ds[n].diem1, &ds[n].diem2);
        ds[n].dtb = (ds[n].diem1 + ds[n].diem2) / 2;
        n++;
    }
    fclose(f);

    // Tim diem cao nhat
    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (ds[i].dtb > ds[maxIdx].dtb) {
            maxIdx = i;
        }
    }

    printf("Hoc sinh diem TB cao nhat: %s (%.2f)\n", ds[maxIdx].ten, ds[maxIdx].dtb);

    // Sap xep giam dan theo DTB
    qsort(ds, n, sizeof(HocSinh), soSanhDTB);

    // Ghi ra file moi
    FILE* out = fopen("D:\\DanhSachHocSinh1.csv", "w");
    if (!out) {
        printf("Khong mo duoc file ghi!\n");
        return 1;
    }

    fprintf(out, "HoTen,Diem1,Diem2,TrungBinh\n");
    for (int i = 0; i < n; i++) {
        fprintf(out, "%s,%.2f,%.2f,%.2f\n", ds[i].ten, ds[i].diem1, ds[i].diem2, ds[i].dtb);
    }
    fclose(out);

    printf("Da luu vao D:\\DanhSachSinhVien\n");
    return 0;
}