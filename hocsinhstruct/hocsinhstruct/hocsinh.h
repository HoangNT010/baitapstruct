#ifndef HOCSINH_H
#define HOCSINH_H

#pragma pack(push)  /* push current alignment to stack */
#pragma pack(1)     /* set alignment to 1 byte boundary */
typedef struct Hocsinh
{
	char name[100];
	char sex[20];
	int age;	
	int student_id;
}HS;

#endif

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void nhapHocSinh(HS* a);
void xuatHocSinh(HS* a);
HS* khoiTaoDanhSachHS(int* p_n);
void xuatDanhSachHS(HS* pt_dshs, int n);