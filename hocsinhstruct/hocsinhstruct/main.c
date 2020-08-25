#include <stdio.h>
#include <conio.h>
#include "hocsinh.h"

int main()
{
	HS* p_hs_arr = NULL;
	int n = 0;
	
	p_hs_arr = khoiTaoDanhSachHS( &n);
	if ((p_hs_arr) == NULL)
	{
		printf_s("Qua trinh cap phat bo nho bi loi!");
		exit(0);
	}
	xuatDanhSachHS(p_hs_arr, n);
	free(p_hs_arr);

	return 0;
}