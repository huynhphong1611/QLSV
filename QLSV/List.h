#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <fstream>
#include "SinhVien.h"
class List{
private:
	int size;
	SinhVien sv[120];
public:
	List() {}
	int GetSize()
	{
		return size;
	}
	void SetSize(int _size)
	{
		size = _size;
	}
	void nhap();
	void SapXepNoiBotTen();
	int partitionTen(int low, int high);
	void SapXepNhanhTen(int low, int high);
	void SapXepChenTen();
	void SapXepChonTen();
	void SapXepNoiBotDiem();
	int partitionDiem(int low, int high);
	void SapXepNhanhDiem(int low, int high);
	void SapXepChenDiem();
	void SapXepChonDiem();
	void SapXepNoiBotNamSinh();
	int partitionNamSinh(int low, int high);
	void SapXepNhanhNamSinh(int low, int high);
	void SapXepChenNamSinh();
	void SapXepChonNamSinh();
	void SapXepNoiBotMalop();
	int partitionMalop(int low, int high);
	void SapXepNhanhMalop(int low, int high);
	void SapXepChenMalop();
	void SapXepChonMalop();
	void SapXepNoiBotMsv();
	int partitionMsv(int low, int high);
	void SapXepNhanhMsv(int low, int high);
	void SapXepChenMsv();
	void SapXepChonMsv();
	void showfile();
	void show();
	void Them_Thong_Tin();
	void updateFileIn();
	void HoanVi(SinhVien& a, SinhVien& b)
	{
		SinhVien Temp;
		Temp = a;
		a = b;
		b = Temp;

	}
	bool TimKiemTuanTu();
	bool TimKiemNhiPhan();
	void xoasinhvien(int delSv);
	int BinarySearchDiem(int r, int l, float x,float timkiemDiem);
	int BinarySearchMsv(int r, int l, string x, string timkiemMsv);

};


#endif
