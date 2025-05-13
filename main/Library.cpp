#include "Library.h"
/*
int formula_euclid(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;

	}
	return a;
}
phan_so phan_so::ham_nhan(phan_so chinh_no, phan_so khac)
{
	phan_so nhan;
	nhan.tuso = chinh_no.tuso * khac.tuso;
	nhan.mauso = chinh_no.mauso * khac.mauso;
	return nhan;
}
phan_so phan_so::ham_chia(phan_so chinh_no, phan_so khac)
{
	phan_so chia;
	chia.tuso = chinh_no.tuso * khac.mauso;
	chia.mauso = chinh_no.mauso * khac.tuso;
	return chia;
}
phan_so phan_so::ham_cong(phan_so chinh_no, phan_so khac)
{
	phan_so cong;
	cong.tuso = (chinh_no.tuso * khac.mauso) + (chinh_no.mauso * khac.tuso);
	cong.mauso = (chinh_no.mauso) * (khac.mauso);
	return cong;
}
phan_so phan_so::tru(phan_so chinh_no, phan_so khac)
{
	phan_so tru;
	tru.tuso = (chinh_no.tuso * khac.mauso) + (chinh_no.mauso * khac.tuso);
	tru.mauso = (chinh_no.mauso) * (khac.mauso);
	return tru;
}
phan_so phan_so::rutgon(phan_so chinh_no)
{
	int uocchunglonnhat = formula_euclid(chinh_no.tuso, chinh_no.mauso);
	chinh_no.tuso /= uocchunglonnhat;
	chinh_no.mauso /= uocchunglonnhat;
	return chinh_no;
}
phan_so phan_so::sosanhlonhon(phan_so chinh_no, phan_so khac)
{
	phan_so a;
	phan_so b;
	phan_so ketqua;

	a.tuso = (chinh_no.tuso * khac.mauso);
	a.mauso = (chinh_no.mauso) * (khac.mauso);

	b.tuso = (chinh_no.mauso * khac.tuso);
	b.mauso = (chinh_no.mauso) * (khac.mauso);

	if (a.mauso == b.mauso)
	{
		if (a.tuso > b.tuso)
		{
			ketqua.tuso = a.tuso;
			ketqua.mauso = ketqua.mauso;
		}
		else
		{
			ketqua.tuso = b.tuso;
			ketqua.mauso = b.mauso;
		}
	}
	return ketqua;


}
phan_so phan_so::sosanhbehon(phan_so chinh_no, phan_so khac)
{
	phan_so a;
	phan_so b;
	phan_so ketqua;

	a.tuso = (chinh_no.tuso * khac.mauso);
	a.mauso = (chinh_no.mauso) * (khac.mauso);

	b.tuso = (chinh_no.mauso * khac.tuso);
	b.mauso = (chinh_no.mauso) * (khac.mauso);

	if (a.mauso == b.mauso)
	{
		if (a.tuso < b.tuso)
		{
			ketqua.tuso = a.tuso;
			ketqua.mauso = a.mauso;
		}
		else
		{
			ketqua.tuso = b.tuso;
			ketqua.mauso = b.mauso;
		}
	}
	return ketqua;



}
phan_so phan_so::sosanhlonhonbang(phan_so chinh_no, phan_so khac)
{
	phan_so a;
	phan_so b;
	phan_so ketqua;

	a.tuso = (chinh_no.tuso * khac.mauso);
	a.mauso = (chinh_no.mauso) * (khac.mauso);

	b.tuso = (chinh_no.mauso * khac.tuso);
	b.mauso = (chinh_no.mauso) * (khac.mauso);

	if (a.mauso == b.mauso)
	{
		if (a.tuso > b.tuso || a.tuso == b.tuso)
		{
			ketqua.tuso = a.tuso;
			ketqua.mauso = ketqua.mauso;
		}
		else
		{
			ketqua.tuso = b.tuso;
			ketqua.mauso = b.mauso;
		}
	}
	return ketqua;

}
phan_so phan_so::sosanhbehonbang(phan_so chinh_no, phan_so khac)
{
	phan_so a;
	phan_so b;
	phan_so ketqua;

	a.tuso = (chinh_no.tuso * khac.mauso);
	a.mauso = (chinh_no.mauso) * (khac.mauso);

	b.tuso = (chinh_no.mauso * khac.tuso);
	b.mauso = (chinh_no.mauso) * (khac.mauso);

	if (a.mauso == b.mauso)
	{
		if (a.tuso < b.tuso || a.tuso == b.tuso)
		{
			ketqua.tuso = a.tuso;
			ketqua.mauso = ketqua.mauso;
		}
		else
		{
			ketqua.tuso = b.tuso;
			ketqua.mauso = b.mauso;
		}
	}
	return ketqua;
}
int phan_so::bang(phan_so chinh_no, phan_so khac)
{
	if (chinh_no.mauso == khac.mauso)
	{
		if (chinh_no.tuso == chinh_no.tuso)
		{
			return 1;
		}
		else
			return 0;
	}

}
*/





