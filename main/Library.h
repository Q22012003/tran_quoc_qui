#pragma once
#include<iostream>



int formula_euclid(int a, int b);
class phan_so
{
public:
	int tuso;
	int mauso;
	phan_so ham_nhan(phan_so chinh_no, phan_so khac);
	phan_so ham_chia(phan_so chinh_no, phan_so khac);
	phan_so ham_cong(phan_so chinh_no, phan_so khac);
	phan_so tru(phan_so chinh_no, phan_so khac);
	phan_so rutgon(phan_so chinh_no);
	phan_so sosanhlonhon(phan_so chinh_no, phan_so khac);
	phan_so sosanhbehon(phan_so chinh_no, phan_so khac);
	phan_so sosanhlonhonbang(phan_so chinh_no, phan_so khac);
	phan_so sosanhbehonbang(phan_so chinh_no, phan_so khac);
	int bang(phan_so chinh_no, phan_so khac);
	
};

class arr {
public:
	int size;
	int* data;

	arr(int soluong)
	{
		size = soluong;
		data = (int*)malloc(sizeof(int) * size);
	}
	int& operator[](int index)
	{
		if (index >= size)
		{
			throw std::runtime_error("vuot qua size");
		}
		return *(data + index);
	}

	void push_back(int val)
	{
		// cap phat vung nho moi lon hon vung nho cu
		int* Newarr = (int*)malloc(sizeof(int) * (size + 1));
		if (Newarr == NULL)
			throw std::runtime_error("khong the cap phat");
		//copy du lieu tu vung nho cu sang vung nho moi va set gia tri cua doi tuong cuoi mang
		for (int i = 0; i < size; i++)
		{
			Newarr[i] = data[i];
		}
		Newarr[size] = val;
		// huy vung nho cu
		free(data);
		// cap nhap dia chi cua vung nho moi vao con tro data
		data = Newarr;
		//cap nhap lai gia tri cua bien size
		size++;
	}

	int sum_arr(arr& a)
	{
		int sum = 0;
		for (int i = 0; i < a.size; i++)
		{
			sum += a[i];
		}
		return sum;
	}
	~arr()
	{
		free(data);
	}

};
