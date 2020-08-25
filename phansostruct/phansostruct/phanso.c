#include "phanso.h"

void toiGianPhanso(struct Phanso* a)
{
	int ucln = 0;
	int so1 = a->Tu;
	int so2 = a->Mau;
	if (a->Tu == 0 || a->Mau == 0)
	{
		ucln = a->Tu + a->Mau;
		return ucln;
	}
	while (a->Tu != a->Mau)
	{
		if (a->Tu > a->Mau)
		{
			a->Tu = a->Tu - a->Mau;
		}
		else
		{
			a->Mau = a->Mau - a->Tu;
		}
	}
	ucln = a->Tu;

	a->Tu = so1 / ucln;
	a->Mau = so2 / ucln;
}

int bcnn(int so1, int so2)
{
	int bcnn = 0;
	int maxV = so1 * so2;
	int mx = so1;

	if (so2 > so1)
	{
		mx = so2;
	}
	for (int i = mx; i <= maxV; i = i + mx)
	{
		if (i % so1 == 0 && i % so2 == 0)
		{
			bcnn = i;
			break;
		}
	}
	return bcnn;
}

void quyDongPhanso(struct Phanso* a, struct Phanso* b)
{
	int so1 = a->Mau;
	int so2 = b->Mau;
	int bc = bcnn(so1, so2);
	a->Tu = a->Tu * (bc / so1);
	b->Tu = b->Tu * (bc/ so2);
	a->Mau = bc;
	b->Mau = bc;
}

struct Phanso nhanHaiPhanso(struct Phanso a, struct Phanso b)
{
	struct Phanso kq;
	kq.Mau = a.Mau * b.Mau;
	kq.Tu = a.Tu * b.Tu;
	return kq;
}

struct Phanso chiaHaiPhanso(struct Phanso a, struct Phanso b)
{
	struct Phanso kq;
	kq.Tu = a.Tu * b.Mau;
	kq.Mau = a.Mau * b.Tu;
	return kq;
}

struct Phanso congHaiPhanso(struct Phanso a, struct Phanso b)
{
	struct Phanso kq;
	quyDongPhanso(&a, &b);
	kq.Tu = a.Tu + b.Tu;
	kq.Mau = a.Mau;
	return kq;
}

struct Phanso truHaiPhanso(struct Phanso a, struct Phanso b)
{
	struct Phanso kq;
	quyDongPhanso(&a, &b);
	kq.Tu = a.Tu - b.Tu;
	kq.Mau = a.Mau;
	return kq;
}