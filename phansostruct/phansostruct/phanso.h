#ifndef PHANSO_H
#define PHANSO_H

#pragma pack(push)  /* push current alignment to stack */
#pragma pack(1)     /* set alignment to 1 byte boundary */
typedef struct Phanso
{
	int Tu;
	int Mau;
}PS;

#endif

#include <conio.h>
#include <stdio.h>

void toiGianPhanso(struct Phanso* a);
int bcnn(int so1, int so2);
void quyDongPhanso(struct Phanso* a, struct Phanso* b);
struct Phanso nhanHaiPhanso(struct Phanso a, struct Phanso b);
struct Phanso chiaHaiPhanso(struct Phanso a, struct Phanso b);
struct Phanso congHaiPhanso(struct Phanso a, struct Phanso b);
struct Phanso truHaiPhanso(struct Phanso a, struct Phanso b);