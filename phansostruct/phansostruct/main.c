#include <conio.h>
#include <stdio.h>
#include "phanso.h"

void selection(PS* s1, PS * s2, PS * kq)
{
	int con = 0;
	do {
		printf_s("------------------Menu Selection-----------------\n");
		printf_s("1/ Cong hai phan so:\r\n");
		printf_s("2/ Tru hai phan so:\r\n");
		printf_s("3/ Nhan hai phan so:\r\n");
		printf_s("4/ Chia hai phan so:\r\n");
		printf_s("9/ Exit\r\n");
		printf_s("-------------------------------------------------\n");
		printf_s("Nhap so can chon: ");
		scanf_s("%d", &con);
		switch (con)
		{
			case 1:
			{
				*kq = congHaiPhanso(*s1 ,*s2);
				printf_s("Ket qua phep cong: %d/%d\r\n", kq->Tu, kq->Mau);
				break;
			}
			case 2:
			{
				*kq = truHaiPhanso(*s1, *s2);
				printf_s("Ket qua phep tru: %d/%d\r\n", kq->Tu, kq->Mau);
				break;
			}
			case 3:
			{
				*kq = nhanHaiPhanso(*s1, *s2);
				printf_s("Ket qua phep nha: %d/%d\r\n", kq->Tu, kq->Mau);
				break;
			}
			case 4:
			{
				*kq = chiaHaiPhanso(*s1, *s2);
				printf_s("Ket qua phep chia: %d/%d\r\n", kq->Tu, kq->Mau);
				break;
			}
			case 9:
			{
				break;
			}
			default:
			{
				printf_s("Ngoai pham vi ho tro cua chuong trinh. Xin vui long chon lai\r\n");
				break;
			}
		}

	} while (con != 9);
}

int main()
{
	PS s1, s2, kq;
	printf_s("Nhap mau / tu cua phan so 1: ");
	scanf_s("%d%d", &s1.Tu, &s1.Mau);
	printf_s("\r\n");
	printf_s("Nhap mau / tu cua phan so 2: ");
	scanf_s("%d%d", &s2.Tu, &s2.Mau);
	selection(&s1 ,&s2, &kq);

	return 0;
}