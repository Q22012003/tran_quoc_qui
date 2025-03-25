#include<stdio.h>

typedef struct {
	char* ten;
	int tuoi;
	float diem_toan;
	float diem_van;
	float diem_trung_binh;
	float xep_loai;
}HOC_SINH;

HOC_SINH xeploai(HOC_SINH* a, int so_luong)
{
	
	for (int i = 0; i < so_luong; i++)
	{
		float diem_trung_binh = ((float) a[i].diem_toan + (float)a[i].diem_van)/ 2.0;
		if (diem_trung_binh < 5)
		{
			printf("HOC SInh yeu");
		}
		else if (diem_trung_binh > 5)
		{
			printf("HOC SINH TRUNG BINH");
		}
		else if (diem_trung_binh > 6.5)
		{
			printf("HOC SINH kha");
		}
		else
		{
			printf("hoc sinh gioi");
		}
	}
}



void main()
{
	HOC_SINH a[] = {
		{.ten = "Nguyen Van A",.tuoi = 19,.diem_toan = 8,.diem_van = 2},
		{.ten = "Nguyen Van B",.tuoi = 19,.diem_toan = 9,.diem_van = 1},
		{.ten = "Nguyen Van C",.tuoi = 19,.diem_toan = 9,.diem_van = 3},
		{.ten = "Nguyen Van D",.tuoi = 19,.diem_toan = 9,.diem_van = 4},
		{.ten = "Nguyen Van E",.tuoi = 19,.diem_toan = 10,.diem_van = 5},
	};
		xeploai(a,5);
}