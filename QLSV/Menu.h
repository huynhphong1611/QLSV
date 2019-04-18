#pragma once
#include "display.h"
#include "List.h"
static str thaotacmenuchinh[6] = { "1.Them moi ho so               ",
								"2.In danh sach                 ",
								"3.Sap xep                      ",
								"4.Tim kiem                     ",
								"5.Thong ke                     ",
								"6.Thoat                        " };
static str thaotacmenusapxep[6] = {
								"1.Sap xep theo ma sinh vien    ",
								"2.Sap xep theo ho va ten       ",
								"3.Sap xep theo nam sinh        ",
								"4.Sap xep theo diem trung binh ",
								"5.Sap xep theo ma lop          ",
								"6.Thoat                        " };
static str thaotacmenutuychonsapxep[5] = {
								"1.Sap xep noi bot              ",
								"2.Sap xep chon                 ",
								"3.Sap xep chen                 ",
								"4.Sap xep nhanh                ",
								"5.Thoat                        " };
static str thaotacmenutimkiem[3] = {
								"1.Tim kiem tuan tu             ",
								"2.Tim kiem nhi phan            ",
								"3.Thoat                        ",
};
class Menu {
public:
	Menu(){}
	void Thucthi()
	{
		display mh;
		List l;
		List ltemp = List();
		l.nhap();
		
	VeMenu:
		{
			mh.menu(thaotacmenuchinh, 6);
			bool chon = true;
			while (chon)
			{
				if (mh.GetNhap() == true)
				{
					l.Them_Thong_Tin();
					l.updateFileIn();
					mh.setNhap(false);
					goto VeMenu;
				}
				if (mh.GetIn() == true)
				{
					l.show();
					l.showfile();
					
					mh.SetIn(false);
					cout << "\nBan co muon thoat ra man hinh menu khong(Y or N)?\n";
					char c;
					cin >> c;
					if (c == 'y')
					{
						mh.SetIn(false);
						goto VeMenu;
					}
					else chon = false;
				}
				if (mh.getSapxep() == true)
				{
				MenuSx:
					{
						mh.menusapxep(thaotacmenusapxep,6);
						if (mh.getCheckSxTen())
						{
							mh.menutuychonsapxepTen(thaotacmenutuychonsapxep, 5);
							bool chonsapxep = true;
							while (chonsapxep)
							{
								if (mh.getSapXepNoiBotTen())
								{
									l.SapXepNoiBotTen();
									mh.setSapxep(false);
									mh.setSapXepNoiBotTen(false);
									mh.setCheckSxTen(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepNhanhTen())
								{
									l.SapXepNhanhTen(0, l.GetSize() - 1);
									mh.setSapxep(false);
									mh.setSapXepNhanhTen(false);
									mh.setCheckSxTen(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChonTen())
								{
									l.SapXepChonTen();
									mh.setSapxep(false);
									mh.setSapXepChonTen(false);
									mh.setCheckSxTen(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChenTen())
								{
									l.SapXepChenTen();
									mh.setSapxep(false);
									mh.setSapXepChenTen(false);
									mh.setCheckSxTen(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getBackSx())
								{
									mh.setSapxep(false);
									mh.setCheckSxTen(false);
									mh.setCheckSxDiem(false);
									mh.setCheckSxNgay(false);
									mh.setCheckSxMalop(false);
									mh.setCheckSxMsv(false);
									mh.setBackSx(false);
									chonsapxep = false;
									goto MenuSx;
								}
							}
						}
						if (mh.getCheckSxMalop())
						{
							mh.menutuychonsapxepMalop(thaotacmenutuychonsapxep, 5);
							bool chonsapxep = true;
							while (chonsapxep)
							{
								if (mh.getSapXepNoiBotMalop())
								{
									l.SapXepNoiBotMalop();
									mh.setSapxep(false);
									mh.setSapXepNoiBotMalop(false);
									mh.setCheckSxMalop(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepNhanhMalop())
								{
									l.SapXepNhanhMalop(0, l.GetSize() - 1);
									mh.setSapxep(false);
									mh.setSapXepNhanhMalop(false);
									mh.setCheckSxMalop(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChenMalop())
								{
									l.SapXepChenMalop();
									mh.setSapxep(false);
									mh.setSapXepChenMalop(false);
									mh.setCheckSxMalop(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChonMalop())
								{
									l.SapXepChonMalop();
									mh.setSapxep(false);
									mh.setSapXepChonMalop(false);
									mh.setCheckSxMalop(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getBackSx())
								{
									mh.setSapxep(false);
									mh.setCheckSxTen(false);
									mh.setCheckSxDiem(false);
									mh.setCheckSxNgay(false);
									mh.setCheckSxMalop(false);
									mh.setCheckSxMsv(false);
									mh.setBackSx(false);
									chonsapxep = false;
									goto MenuSx;
								}
							}
						}
						if (mh.getCheckSxDiem())
						{
							mh.menutuychonsapxepDiem(thaotacmenutuychonsapxep, 5);
							bool chonsapxep = true;
							while (chonsapxep)
							{
								if (mh.getSapXepNoiBotDiem())
								{
									l.SapXepNoiBotDiem();
									mh.setSapxep(false);
									mh.setSepXepNoiBotDiem(false);
									mh.setCheckSxDiem(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepNhanhDiem())
								{
									l.SapXepNhanhDiem(0, l.GetSize() - 1);
									mh.setSapxep(false);
									mh.setSepXepNhanhDiem(false);
									mh.setCheckSxTen(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChonDiem())
								{
									l.SapXepChonDiem();
									mh.setSapxep(false);
									mh.setSepXepChonDiem(false);
									mh.setCheckSxTen(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChenDiem())
								{
									l.SapXepChenDiem();
									mh.setSapxep(false);
									mh.setSepXepChenDiem(false);
									mh.setCheckSxTen(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getBackSx())
								{
									mh.setSapxep(false);
									mh.setCheckSxTen(false);
									mh.setCheckSxDiem(false);
									mh.setCheckSxNgay(false);
									mh.setCheckSxMalop(false);
									mh.setCheckSxMsv(false);
									mh.setBackSx(false);
									chonsapxep = false;
									goto MenuSx;
								}
							}
						}
						if (mh.getCheckSxNgay())
						{
							mh.menutuychonsapxepNamSinh(thaotacmenutuychonsapxep, 5);
							bool chonsapxep = true;
							while (chonsapxep)
							{
								if (mh.getSapXepNoiBotNamSinh())
								{
									l.SapXepNoiBotNamSinh();
									mh.setSapxep(false);
									mh.setSapXepNoiBotNamSinh(false);
									mh.setCheckSxNgay(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepNhanhNamSinh())
								{
									l.SapXepNhanhNamSinh(0, l.GetSize() - 1);
									mh.setSapxep(false);
									mh.setSapXepNhanhNamSinh(false);
									mh.setCheckSxNgay(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChonNamSinh())
								{
									l.SapXepChonNamSinh();
									mh.setSapxep(false);
									mh.setSapXepChonNamSinh(false);
									mh.setCheckSxNgay(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChenNamSinh())
								{
									l.SapXepChenNamSinh();
									mh.setSapxep(false);
									mh.setSapXepChenNamSinh(false);
									mh.setCheckSxNgay(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getBackSx())
								{
									mh.setSapxep(false);
									mh.setCheckSxTen(false);
									mh.setCheckSxDiem(false);
									mh.setCheckSxNgay(false);
									mh.setCheckSxMalop(false);
									mh.setCheckSxMsv(false);
									mh.setBackSx(false);
									chonsapxep = false;
									goto MenuSx;
								}
							}
						}
						//sxmsv
						if (mh.getCheckSxMsv())
						{
							mh.menutuychonsapxepMsv(thaotacmenutuychonsapxep, 5);
							bool chonsapxep = true;
							while (chonsapxep)
							{
								if (mh.getSapXepNoiBotMsv())
								{
									l.SapXepNoiBotMsv();
									mh.setSapxep(false);
									mh.setSapXepNoiBotMsv(false);
									mh.setCheckSxMsv(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepNhanhMsv())
								{
									l.SapXepNhanhMsv(0, l.GetSize() - 1);
									mh.setSapxep(false);
									mh.setSapXepNhanhMsv(false);
									mh.setCheckSxMsv(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChonMsv())
								{
									l.SapXepChonMsv();
									mh.setSapxep(false);
									mh.setSapXepChonMsv(false);
									mh.setCheckSxMsv(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getSapXepChenMsv())
								{
									l.SapXepChenMsv();
									mh.setSapxep(false);
									mh.setSapXepChenMsv(false);
									mh.setCheckSxMsv(false);
									chonsapxep = false;
									goto VeMenu;
								}
								if (mh.getBackSx())
								{
									mh.setSapxep(false);
									mh.setCheckSxTen(false);
									mh.setCheckSxDiem(false);
									mh.setCheckSxNgay(false);
									mh.setCheckSxMalop(false);
									mh.setCheckSxMsv(false);
									mh.setBackSx(false);
									chonsapxep = false;
									goto MenuSx;
								}
							}
						}
						if (mh.getBack())
						{
							chon = false;
							mh.setBack(false);
							mh.setSapxep(false);
							goto VeMenu;
						}
					}
				}
				if (mh.getTimKiem() == true)
				{
						mh.menutuychontimkiem(thaotacmenutimkiem, 3);
						if (mh.getTimKiemTuanTu())
						{
							mh.setTimKiemTuanTu(false);
							mh.setTimKiem(false);
							if(l.TimKiemTuanTu()) goto VeMenu;
							else chon = false;

						}
						if (mh.getTimKiemNhiPhan())
						{
							ltemp = l;
							ltemp.SapXepNoiBotDiem();
							mh.setTimKiemNhiPhan(false);
							mh.setTimKiem(false);
							
							if (ltemp.TimKiemNhiPhan()) goto VeMenu;
							else chon = false;
						}
						if (mh.getBackTimKiem())
						{
							mh.setBackTimKiem(false);
							mh.setTimKiem(false);
							goto VeMenu;
						}
					
					
				}
				if (mh.getExit() == true)
				{
					system("cls");
					chon = false;
				}
			}
		}
	}
};