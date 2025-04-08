#include <stdio.h>

typedef enum
{
	NAM,
	NU
} gioiTinh_t;

typedef enum
{
	GIOI,
	KHA,
	TRUNG_BINH,
	YEU
} loai_t;

typedef struct
{
	char* ten;
	int tuoi;
	gioiTinh_t gioi_tinh;
	float diem_toan;
	float diem_van;
	loai_t loai;
} hoc_sinh_t;

void xeploai(hoc_sinh_t* sv, int size)
{
	float diem_trung_binh;
	for (int i = 0; i < size; i++)
	{
		diem_trung_binh = (sv[i].diem_toan + sv[i].diem_van) / 2.0;
		if (diem_trung_binh < 5.0)
		{
			sv[i].loai = YEU;
		}
		else if (diem_trung_binh < 6.5)
		{
			sv[i].loai = TRUNG_BINH;
		}
		else if (diem_trung_binh < 8.0)
		{
			sv[i].loai = KHA;
		}
		else
		{
			sv[i].loai = GIOI;
		}
	}
}

void in_thong_tin(hoc_sinh_t* sv, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Ten: %s, Tuoi: %d, Gioi tinh: %s, Toan: %.1f, Van: %.1f, Xep loai: ",
			sv[i].ten, sv[i].tuoi,
			sv[i].gioi_tinh == NAM ? "Nam" : "Nữ",
			sv[i].diem_toan, sv[i].diem_van);

		/*switch (sv[i].loai)
		{
		case GIOI: printf("Giỏi\n"); break;
		case KHA: printf("Khá\n"); break;
		case TRUNG_BINH: printf("Trung Bình\n"); break;
		case YEU: printf("Yếu\n"); break;
		}*/
	}
}

int main()
{
	hoc_sinh_t arr[] = {
		{"Tommy", 18, NAM, 5, 5},
		{"Mono", 18, NU, 8, 7}
	};

	int size = sizeof(arr) / sizeof(arr[0]);

	xeploai(arr, size);
	in_thong_tin(arr, size);

	return 0;
}
