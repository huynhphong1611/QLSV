#ifndef DISPLAY_H
#define DISPLAY_H
#include <iostream>
#include "console.h"

using namespace std;
class display
{
private:
    bool Nhap,In,sapxep,TimKiem,Thongke,Back,BackSx,Exit, CheckSxTen, CheckSxDiem
		, CheckSxNgay, CheckSxMsv, CheckSxMalop;
	bool SapXepNoiBotTen, SapXepNhanhTen,SapXepChenTen,SapXepChonTen;
	bool SapXepNoiBotDiem, SapXepNhanhDiem, SapXepChenDiem, SapXepChonDiem;
	bool SapXepNoiBotMalop, SapXepNhanhMalop, SapXepChenMalop, SapXepChonMalop;
	bool SapXepNoiBotNamSinh, SapXepNhanhNamSinh, SapXepChenNamSinh, SapXepChonNamSinh;
	bool SapXepNotBotMsv, SapXepNhanhMsv, SapXepChenMsv, SapXepChonMsv;
	bool TimKiemTuanTu, TimKiemNhiPhan,BackTimkiem;
public:
    display()
    {
        Nhap=false;
        In=false;
        sapxep=false;
		TimKiem = false;
        Back=false;
        Exit=false;
		Thongke = false;
		SapXepNoiBotTen = false;
		SapXepNhanhTen=false;
		SapXepChenTen = false;
		SapXepChenTen = false;
		SapXepNoiBotDiem = false;
		SapXepNhanhDiem = false;
		SapXepChenDiem = false;
		SapXepChonDiem = false;
		SapXepNoiBotNamSinh = false;
		SapXepNhanhNamSinh = false; 
		SapXepChenNamSinh = false; 
		SapXepChonNamSinh = false;
		SapXepNotBotMsv = false;
		SapXepNhanhMsv = false;
		SapXepChenMsv = false;
		SapXepChonMsv = false;
		CheckSxTen = false;
		CheckSxDiem = false;
		CheckSxNgay = false;
		CheckSxMsv=false;
		CheckSxMalop = false;
		BackSx = false;
		TimKiemTuanTu = false;
		TimKiemNhiPhan=false ;
		BackTimkiem = false;
    }
    bool GetNhap()
    {
        return Nhap;
    }
	void setNhap(bool nhap)
	{
		Nhap = nhap;
	}
    bool GetIn()
    {
        return In;
    }
    void SetIn( bool in)
    {
        In=in;
    }
    bool getSapxep()
    {
        return sapxep;
    }
	void setSapxep(bool sx)
	{
		sapxep = sx;
	}
	bool getTimKiem()
	{
		return TimKiem;
	}
	void setTimKiem(bool timKiem) {
		TimKiem = timKiem;
	}
    bool getBack()
    {
        return Back;
    }
	void setBack(bool back)
	{
		Back = back;
	}
	bool getBackSx()
	{
		return BackSx;
	}
	void setBackSx(bool backSx)
	{
		BackSx = backSx;
	}
    bool getExit()
    {
        return Exit;
    }
	bool getSapXepNoiBotTen()
	{
		return SapXepNoiBotTen;
	}
	void setSapXepNoiBotTen(bool sapXepNoiBotTen)
	{
		SapXepNoiBotTen = sapXepNoiBotTen;
	}
	bool getSapXepNhanhTen()
	{
		return SapXepNhanhTen;
	}
	void setSapXepNhanhTen(bool sapXepNhanhTen)
	{
		SapXepNhanhTen = sapXepNhanhTen;
	}
	bool getSapXepChonTen()
	{
		return SapXepChonTen;
	}
	void setSapXepChonTen(bool sapXepChonTen)
	{
		SapXepChonTen = sapXepChonTen;
	}
	bool getSapXepChenTen()
	{
		return SapXepChenTen;
	}
	void setSapXepChenTen(bool sapXepChenTen)
	{
		SapXepChenTen = sapXepChenTen;
	}
	bool getCheckSxTen()
	{
		return CheckSxTen;
	}
	bool getCheckSxDiem()
	{
		return CheckSxDiem;
	}
	bool getCheckSxNgay()
	{
		return CheckSxNgay;
	}
	bool getCheckSxMsv()
	{
		return CheckSxMsv;
	}
	bool getCheckSxMalop()
	{
		return CheckSxMalop;
	}
	void setCheckSxTen(bool checkSxTen)
	{
		CheckSxTen = checkSxTen;
	}
	void setCheckSxDiem(bool checkSxDiem)
	{
		CheckSxDiem = checkSxDiem;
	}
	void setCheckSxNgay(bool checkSxNgay)
	{
		CheckSxNgay = checkSxNgay;
	}
	void setCheckSxMsv(bool checkSxMsv)
	{
		CheckSxMsv = checkSxMsv;
	}
	void setCheckSxMalop(bool checkSxMalop)
	{
		CheckSxMalop = checkSxMalop;
	}
	bool getSapXepNoiBotDiem()
	{
		return SapXepNoiBotDiem;
	}
	void setSepXepNoiBotDiem(bool sapXepNoiBotDiem)
	{
		SapXepNoiBotDiem = sapXepNoiBotDiem;
	}
	bool getSapXepChonDiem()
	{
		return SapXepChonDiem;
	}
	void setSepXepChonDiem(bool sapXepChonDiem)
	{
		SapXepChonDiem = sapXepChonDiem;
	}
	bool getSapXepChenDiem()
	{
		return SapXepChenDiem;
	}
	void setSepXepChenDiem(bool sapXepChenDiem)
	{
		SapXepChenDiem = sapXepChenDiem;
	}
	bool getSapXepNhanhDiem()
	{
		return SapXepNhanhDiem;
	}
	void setSepXepNhanhDiem(bool sapXepNhanhDiem)
	{
		SapXepNhanhDiem = sapXepNhanhDiem;
	}
    //bool SapXepNoiBotMalop, SapXepNhanhMalop, SapXepChenMalop, SapXepChonMalop;
	bool getSapXepNoiBotMalop()
	{
		return SapXepNoiBotMalop;
	}
	void setSapXepNoiBotMalop(bool sapXepNoiBotMalop)
	{
		SapXepNoiBotMalop = sapXepNoiBotMalop;
	}
	bool getSapXepNhanhMalop()
	{
		return SapXepNhanhMalop;
	}
	void setSapXepNhanhMalop(bool sapXepNhanhMalop)
	{
		SapXepNhanhMalop = sapXepNhanhMalop;
	}
	bool getSapXepChonMalop()
	{
		return SapXepChonMalop;
	}
	void setSapXepChonMalop(bool sapXepChonMalop)
	{
		SapXepChonMalop = sapXepChonMalop;
	}
	bool getSapXepChenMalop()
	{
		return SapXepChenMalop;
	}
	void setSapXepChenMalop(bool sapXepChenMalop)
	{
		SapXepChenMalop = sapXepChenMalop;
	}
	//bool SapXepNoiBotNamSinh, SapXepNhanhNamSinh, SapXepChenNamSinh, SapXepChonNamSinh;
	bool getSapXepNoiBotNamSinh()
	{
		return SapXepNoiBotNamSinh;
	}
	void setSapXepNoiBotNamSinh(bool sapXepNoiBotNamSinh)
	{
		SapXepNoiBotNamSinh = sapXepNoiBotNamSinh;
	}
	bool getSapXepNhanhNamSinh()
	{
		return SapXepNhanhNamSinh;
	}
	void setSapXepNhanhNamSinh(bool sapXepNhanhNamSinh)
	{
		SapXepNhanhNamSinh = sapXepNhanhNamSinh;
	}
	bool getSapXepChonNamSinh()
	{
		return SapXepChonNamSinh;
	}
	void setSapXepChonNamSinh(bool sapXepChonNamSinh)
	{
		SapXepChonNamSinh = sapXepChonNamSinh;
	}
	bool getSapXepChenNamSinh()
	{
		return SapXepChenNamSinh;
	}
	void setSapXepChenNamSinh(bool sapXepChenNamSinh)
	{
		SapXepChenNamSinh = sapXepChenNamSinh;
	}
	//bool SapXepNotBotMsv, SapXepNhanhMsv, SapXepChenMsv, SapXepChonMsv;
	bool getSapXepNoiBotMsv()
	{
		return SapXepNotBotMsv;
	}
	void setSapXepNoiBotMsv(bool sapXepNoiBotMsv)
	{
		SapXepNotBotMsv = sapXepNoiBotMsv;
	}
	bool getSapXepNhanhMsv()
	{
		return SapXepNhanhMsv;
	}
	void setSapXepNhanhMsv(bool sapXepNhanhMsv)
	{
		SapXepNhanhMsv = sapXepNhanhMsv;
	}
	bool getSapXepChonMsv()
	{
		return SapXepChonMsv;
	}
	void setSapXepChonMsv(bool sapXepChonMsv)
	{
		SapXepChonMsv = sapXepChonMsv;
	}
	bool getSapXepChenMsv()
	{
		return SapXepChenMsv;
	}
	void setSapXepChenMsv(bool sapXepChenMsv)
	{
		SapXepChenMsv = sapXepChenMsv;
	}
	// timkiem
	void setTimKiemTuanTu(bool timKiemTuanTu) {
		TimKiemTuanTu = timKiemTuanTu;
	}
	bool getTimKiemTuanTu()
	{
		return TimKiemTuanTu;
	}
	void setTimKiemNhiPhan(bool timKiemNhiPhan) {
		TimKiemNhiPhan = timKiemNhiPhan;
	}
	bool getTimKiemNhiPhan()
	{
		return TimKiemNhiPhan;
	}
	void setBackTimKiem(bool backTimKiem) {
		BackTimkiem = backTimKiem;
	}
	bool getBackTimKiem()
	{
		return BackTimkiem;
	}
	int menu(str thaotacmenuchinh[6],int n);
	int menusapxep(str thaotacmenusapxep[5], int n);
	int menutuychonsapxepTen(str thaotacmenutuychonsapxep[5], int n);
	int menutuychonsapxepDiem(str thaotacmenutuychonsapxep[5], int n);
	int menutuychonsapxepMalop(str thaotacmenutuychonsapxep[5], int n);
	int menutuychonsapxepNamSinh(str thaotacmenutuychonsapxep[5], int n);
	int menutuychonsapxepMsv(str thaotacmenutuychonsapxep[5], int n);
	int menutuychontimkiem(str thaotacmenutimkiem[3], int n);
};
#endif
