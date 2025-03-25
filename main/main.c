#include<stdio.h>
#include "Stringg.h"
#define max 100
#define min 50
void main() {
	char c[max];
	char ky_tu = 'b';
	char b[min];
	printf("nhap chuoi A: ");
	gets(c);
	printf("nhap chuoi B: ");
	gets(b);
	

	//bài 1: đếm số ký tự 
	//printf("\ntong ky tu trong chuoi la: %d", dem_chuoi(c));
	


	// bài 2: đếm số ký tự space
	//printf("\nco %d ky tu space", dem_space(c));
	 


// 	   bài 3: Hoa sang chữ thường
	//Hoa_sang_thuong(c);
	//printf("\nchuoi in thuong: %s",c);
	


	// bài 4: đếm số từ 
	//printf("co %d tu trong chuoi", dem_so_tu(c));
	

	// bài 5: chữ cái in hoa đầu tiên trong chuỗi
	//chu_dau_in_hoa(c);

	// bài 6: Xây dựng hàm. dùng để tìm ký tự c trong chuỗi str. hàm trả về địa chỉ của ký tự c trong chuỗi str
	//char* dia_chi = tim_ky_tu(c, ky_tu);
	//if (dia_chi != NULL) {
	//	printf("Tim thay ky tu '%c' tai dia chi: %p\n", ky_tu, dia_chi);
	//	printf("Gia tri tai dia chi nay la: %c\n", *dia_chi);
	//}
	//else {
	//	printf("Khong tim thay ky tu '%c' trong chuoi!\n", ky_tu);
	//}


	// bài 7: Xây dựng hàm. dùng để tìm chuỗi subStr trong chuỗi str. hàm trả về địa chỉ bất đầu của subStr trong chuỗi str
	char* ket_qua = tim_chuoi(c, b);
	if (ket_qua != NULL) {
		printf("Tim thay chuoi \"%s\" trong \"%s\" tai dia chi: %p\n", b, c, ket_qua);
		printf("Chuoi tai dia chi nay la: %s\n", ket_qua);
	}
	else {
		printf("Khong tim thay chuoi \"%s\" trong \"%s\"\n", b, c);
	}

}