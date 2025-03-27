#include <stdio.h>
#include <stdlib.h>

struct hoc_sinh {
    char ten[50];
    int tuoi;
    char gioitinh[10];
    float diemtoan;
    float diemvan;
    float diemtrungbinh;
};

typedef struct hoc_sinh HS;

// Hàm nhập thông tin một học sinh
//Input: struct*a
//Output: không có
void nhap_hocsinh(HS* a) {
    printf("\nNhap ten: ");
    scanf_s(" %[^\n]", a->ten, (unsigned)sizeof(a->ten));

    printf("Nhap tuoi: ");
    scanf_s("%d", &a->tuoi);

    printf("Nhap gioi tinh: ");
    scanf_s(" %[^\n]", a->gioitinh, (unsigned)sizeof(a->gioitinh));

    printf("Điem Toan: ");
    scanf_s("%f", &a->diemtoan);

    printf("Điem Van: ");
    scanf_s("%f", &a->diemvan);

    // Tính điểm trung bình
    a->diemtrungbinh = (a->diemtoan + a->diemvan) / 2.0f;
}

// Hàm nhập danh sách học sinh
//Input: Struct mang , so luong n
//Output: không
void nhap_danhsach(HS hs[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n=== Nhap hoc sinh thu %d ===", i + 1);
        nhap_hocsinh(&hs[i]);
    }
}

// Hàm xuất danh sách học sinh
//Input: struct mang a ,  so luong n
//Output: không
void xuat_danhsach(HS hs[], int n) {
    printf("\n========== Danh Sach Hoc Sinh ==========\n");
    for (int i = 0; i < n; i++) {
        printf("\nhoc sinh %d:\n", i + 1);
        printf("Ten: %s\n", hs[i].ten);
        printf("Tuoi: %d\n", hs[i].tuoi);
        printf("Gioi tinh: %s\n", hs[i].gioitinh);
        printf("Điem Toan: %.2f\n", hs[i].diemtoan);
        printf("Điem Van: %.2f\n", hs[i].diemvan);
        printf("Điem Trung Binh: %.2f\n", hs[i].diemtrungbinh);
    }
}

// Hàm hoán đổi hai học sinh
// Input: Struct*a , Struct*b
//Input: struct mang a ,  so luong n
//Output: không
void hoan_doi(HS* a, HS* b) {
    HS temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp danh sách theo điểm trung bình (Cao → Thấp)
// Input: Struct*a , Struct*b
//Input: struct mang a ,  so luong n
//Output: không
void sap_xep_hocsinh(HS hs[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (hs[i].diemtrungbinh < hs[j].diemtrungbinh) {
                hoan_doi(&hs[i], &hs[j]);
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so hoc sinh: ");
    scanf_s("%d", &n);

    HS* danhsach = (HS*)malloc(n * sizeof(HS)); 

    nhap_danhsach(danhsach, n);

    sap_xep_hocsinh(danhsach, n);

    
    xuat_danhsach(danhsach, n);

    free(danhsach); 

    return 0;
}
