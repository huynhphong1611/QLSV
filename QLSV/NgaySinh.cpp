#include "NgaySinh.h"
NgaySinh::NgaySinh()
{
    ngay=16;
    thang=11;
    nam=1999;
}
void NgaySinh::nhap()
{
	fflush(stdin);
	cout<<"\nNhap ngay sinh: ";
	cin>>ngay;
	cout<<"\nNhap thang sinh: ";
	cin>>thang;
	cout<<"\nNhap nam sinh: ";
	cin>>nam;
}
int NgaySinh::xuatngay(){
	return ngay;
}
int NgaySinh::xuatthang()
{
	return thang;
}
int NgaySinh::xuatnam()
{
	return nam;
}
