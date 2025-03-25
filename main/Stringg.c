#include"Stringg.h"

int dem_chuoi(char c[]) {
	int ketqua = 0;
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return i;
}

int dem_space(char c[]) {

		int ketqua = 0;
		int i = 0;

		while (c[i] != '\0')
		{
			if (c[i] == ' ') {
				i++;
			}
		}
		return i;
}

void Hoa_sang_thuong(char c[]) {
	int i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
		{
			c[i] = c[i] + 32;
		}
		i++;
	}
}
int dem_so_tu(char c[]) {
	int i = 0;
	int n = 0;
	int ketqua = 0;
	while (c[i] != '\0')
	{
		if (c[i] != ' ' && (i == 0 || c[i - 1] == ' '))
		{
			ketqua++;
		}
		i++;
	}
	return ketqua;
}

void chu_dau_in_hoa(char c[])
{
	int i = 0;
	while (c[i] != '\0')
	{
		if (c[i] > 'a' && c[i] < 'z'&&i==0)
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	printf("\nchu cai in hoa la %s", c);
}
#include <stdio.h>

char* tim_ky_tu(char* str, char c) {
	while (*str != '\0') {  
		if (*str == c) {    
			return str;     
		}
		str++;  
	}
	return NULL;  
}
#include <stdio.h>

char* tim_chuoi(char* str, char* subStr) {
	// Duyệt qua từng ký tự của chuỗi str
	while (*str != '\0') {
		char* start = str;     // Lưu địa chỉ bắt đầu hiện tại
		char* pSub = subStr;   // Con trỏ duyệt subStr

		// So sánh từng ký tự của str và subStr
		while (*str == *pSub && *pSub != '\0') {
			str++;
			pSub++;
		}

		// Nếu duyệt hết subStr (tức là tìm thấy subStr trong str)
		if (*pSub == '\0') {
			return start;   // Trả về địa chỉ bắt đầu của subStr trong str
		}

		str = start + 1;  // Quay lại địa chỉ tiếp theo trong str để duyệt tiếp
	}

	return NULL;  // Không tìm thấy subStr trong str
}
