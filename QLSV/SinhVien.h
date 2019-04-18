#ifndef SINHVIEN_H
#define SINHVIEN_H
#include "display.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
static ifstream filein ("SINHVIEN1.txt",ios::in);
using namespace std;
class SinhVien
{
	public:
		string malop;
		string msv;
		string hoten;
		string ngaysinh;
		float diem;
	public:
	    SinhVien();
	    SinhVien(string hoten ,string ngaysinh ,string msv,string malop,float diem);
	    void Output();
		string GetHoten()
		{
		    return hoten;
		}
		char GetTen()
		{
			char Ten;
			hoten = ChuanHoaHoTen(XoaKhoangCach(hoten));
			int i, n = hoten.length();
			for (i = n-1; i > 0; i--)
			{
				if (hoten[i] == ' ')
				{
					Ten = hoten[i+1];
					break;
				}
					
			}
			return Ten;
		}
		char GetLop()
		{
			char Lop;
			malop = ChuanHoaHoTen(XoaKhoangCach(malop));
			Lop = malop[0];
			return Lop;
		}
		int GetNam() const {
			int d, m, y;
			istringstream is (ngaysinh);
			char delimiter;
			is >> d >> delimiter >> m >> delimiter >> y;
			return y;
		}
		int GetSizeTen()
		{
			return ChuanHoaHoTen(XoaKhoangCach(hoten)).length();
		}
		void SetHoten(string ht)
		{
		    hoten=ht;
		}
		string GetNgaySinh()
		{
		    return ngaysinh;
		}
		void SetNgaySinh(string ns)
		{
		    ngaysinh=ns;
		}
		string GetMaLop()
		{
		    return malop;
		}
		void SetMaLop(string ml)
		{
		    malop=ml;
		}
		string GetMsv()
		{
		    return msv;
		}
		int GetMsvSx()// de sap xep
		{
			int MSV;
			istringstream lay(msv);
			lay >> MSV;
			return MSV;
		}
		void SetMsv(string _msv)
		{
		    msv=_msv;
		}
		float GetDiem()
		{
		    return diem;
		}
		void SetDiem(float d){
		diem =d;
		}
		void nhap();
		void xuat();
		string ChuanHoaHoTen(string HT);
		string XoaKhoangCach(string HT);
		string XoaKiTu(string HT,int temp);
		void XuatSinhVien();


};

#endif
