#include "hocsinh.h"

void nhapHocSinh(HS * a)
{
	printf_s("Ten hoc sinh: ");
	scanf_s(" %s", a->name, sizeof(a->name));
	printf_s("Gioi tinh hoc sinh: ");
	scanf_s(" %s", a->sex, sizeof(a->sex));
	printf_s("Tuoi cua hoc sinh: ");
	scanf_s("%d", &a->age);
	printf_s("Ma so hoc sinh: ");
	scanf_s("%d", &a->student_id);
}

void xuatHocSinh(HS * a)
{
	printf_s("Ten hoc sinh: %s\r\n", a->name);
	printf_s("Gioi tinh hoc sinh: %s\r\n", a->sex);
	printf_s("Ma so hoc sinh: %d\r\n", a->student_id);
	printf_s("Tuoi cua hoc sinh: %d\r\n", a->age);
}

HS* khoiTaoDanhSachHS( int * p_n)
{
	printf_s("Nhap so luong sinh vien can khoi tao: ");
	scanf_s("%d", p_n);
	HS *pt_dshs = (HS*)calloc(*p_n, sizeof(HS));
	if (pt_dshs == NULL)
	{
		printf_s("Qua trinh cap phat bo nho bi loi!");
		return NULL;
	}
	for (int i = 0; i < *p_n; i++)
	{
		nhapHocSinh((pt_dshs + i));
		printf("------------------------------\r\n");
	}
	return pt_dshs;
}

void xuatDanhSachHS(HS * pt_dshs, int n)
{
	for (int i = 0; i < n; i++)
	{
		xuatHocSinh((pt_dshs + i));
		printf("------------------------------\r\n");
	}

}