#include "display.h"
#include <conio.h>
#define MAUNEN 172
#define MAUCHU 8

enum TRANGTHAI{UP,DOWN,LEFT,RIGHT,ENTER,BACK};
TRANGTHAI key(int z)
{
    if(z==224)
    {
        char c;
        c=_getch();
        if(c==72){return UP;}
        if(c==80) return DOWN;
        if(c==77) return RIGHT;
        if(c==75) return LEFT;
    }
    else if(z==13) return ENTER;
}
int display::menu(str thaotacmenuchinh[],int n)//n de then hoac bot thai tac
{
    int tt=0;// bien chon vao thao tac nao thi thao tac do doi mau
    int *mau =new int [n];

    for (int i=0;i<n;i++)
        mau[i]=MAUCHU;
        mau[0]=MAUNEN;
    while(1)
    {
        clrscr();
        TextColor(8);
        gotoXY(50,7);
        cout<<"------------MENU---------------";

        for (int i=0;i<n;i++)
        {
            gotoXY(50,8+i);
            TextColor(mau[i]);
            cout<<thaotacmenuchinh[i]<<endl;
        }
        TextColor(8);
        gotoXY(50,8+n);
        cout<<"-------------------------------";
        int z=_getch();
		TRANGTHAI trangthai = key(z);
        switch (trangthai)
        {
        case UP:
            {
                tt--;
                if(tt<0)tt=n-1;
                break;
            }
        case DOWN:
            {
                tt++;
                if(tt>=n)tt=0;
                break;
            }
        case ENTER:
            {
                system("cls");
                if(tt==0) Nhap=true;
                if(tt==1) In=true;
                if(tt==2) sapxep=true;
				if (tt == 3) TimKiem = true;
                if(tt==4) Thongke=true;
                if(tt==5) Exit=true;
                return tt;
            }


        }
        for(int i=0;i<n;i++)
            mau[i]=MAUCHU;
            mau[tt]=MAUNEN;
    }

}
int display::menusapxep(str thaotacmenusapxep[], int n)
{
	int tt = 0;// bien chon vao thao tac nao thi thao tac do doi mau
	int *mau = new int[n];

	for (int i = 0; i < n; i++)
	mau[i] = MAUCHU;
	mau[0] = MAUNEN;
	while (1)
	{
		clrscr();
		TextColor(8);
		gotoXY(50, 7);
		cout << "------------MENU---------------";

		for (int i = 0; i < n; i++)
		{
			gotoXY(50, 8 + i);
			TextColor(mau[i]);
			cout << thaotacmenusapxep[i] << endl;
		}
		TextColor(8);
		gotoXY(50, 8 + n);
		cout << "-------------------------------";
		int z = _getch();
		TRANGTHAI trangthai = key(z);
		switch (trangthai)
		{
		case UP:
		{
			tt--;
			if (tt < 0)tt = n - 1;
			break;
		}
		case DOWN:
		{
			tt++;
			if (tt >= n)tt = 0;
			break;
		}
		case ENTER:
		{
			system("cls");
			if (tt == 0) CheckSxMsv = true;
			if (tt == 1) CheckSxTen = true;
			if (tt == 2) CheckSxNgay = true;
			if (tt == 3) CheckSxDiem = true;
			if (tt == 4) CheckSxMalop = true;
			if (tt == 5) Back = true;
			return tt;
		}


		}
		for (int i = 0; i < n; i++)
		mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	}
}
int display::menutuychonsapxepTen(str thaotacmenutuychonsapxep[], int n)
{
	int tt = 0;// bien chon vao thao tac nao thi thao tac do doi mau
	int *mau = new int[n];

	for (int i = 0; i < n; i++)
		mau[i] = MAUCHU;
	mau[0] = MAUNEN;
	while (1)
	{
		clrscr();
		TextColor(8);
		gotoXY(50, 7);
		cout << "------------MENU---------------";

		for (int i = 0; i < n; i++)
		{
			gotoXY(50, 8 + i);
			TextColor(mau[i]);
			cout << thaotacmenutuychonsapxep[i] << endl;
		}
		TextColor(8);
		gotoXY(50, 8 + n);
		cout << "-------------------------------";
		int z = _getch();
		TRANGTHAI trangthai = key(z);
		switch (trangthai)
		{
		case UP:
		{
			tt--;
			if (tt < 0)tt = n - 1;
			break;
		}
		case DOWN:
		{
			tt++;
			if (tt >= n)tt = 0;
			break;
		}
		case ENTER:
		{
			system("cls");
			if (tt == 0) SapXepNoiBotTen = true;
			if (tt == 1) SapXepChonTen = true;
			if (tt == 2) SapXepChenTen = true;
			if (tt == 3) SapXepNhanhTen = true;
			if (tt == 4) BackSx = true;
			return tt;
		}


		}
		for (int i = 0; i < n; i++)
		mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	}
}
int display::menutuychonsapxepDiem(str thaotacmenutuychonsapxep[], int n)
{
	int tt = 0;// bien chon vao thao tac nao thi thao tac do doi mau
	int *mau = new int[n];

	for (int i = 0; i < n; i++)
		mau[i] = MAUCHU;
	mau[0] = MAUNEN;
	while (1)
	{
		clrscr();
		TextColor(8);
		gotoXY(50, 7);
		cout << "------------MENU---------------";

		for (int i = 0; i < n; i++)
		{
			gotoXY(50, 8 + i);
			TextColor(mau[i]);
			cout << thaotacmenutuychonsapxep[i] << endl;
		}
		TextColor(8);
		gotoXY(50, 8 + n);
		cout << "-------------------------------";
		int z = _getch();
		TRANGTHAI trangthai = key(z);
		switch (trangthai)
		{
		case UP:
		{
			tt--;
			if (tt < 0)tt = n - 1;
			break;
		}
		case DOWN:
		{
			tt++;
			if (tt >= n)tt = 0;
			break;
		}
		case ENTER:
		{
			system("cls");
			if (tt == 0) SapXepNoiBotDiem = true;
			if (tt == 1) SapXepChonDiem = true;
			if (tt == 2) SapXepChenDiem = true;
			if (tt == 3) SapXepNhanhDiem = true;
			if (tt == 4) BackSx = true;
			return tt;
		}


		}
		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	}
}
int display::menutuychonsapxepMalop(str thaotacmenutuychonsapxep[], int n)
{
	int tt = 0;// bien chon vao thao tac nao thi thao tac do doi mau
	int *mau = new int[n];

	for (int i = 0; i < n; i++)
		mau[i] = MAUCHU;
	mau[0] = MAUNEN;
	while (1)
	{
		clrscr();
		TextColor(8);
		gotoXY(50, 7);
		cout << "------------MENU---------------";

		for (int i = 0; i < n; i++)
		{
			gotoXY(50, 8 + i);
			TextColor(mau[i]);
			cout << thaotacmenutuychonsapxep[i] << endl;
		}
		TextColor(8);
		gotoXY(50, 8 + n);
		cout << "-------------------------------";
		int z = _getch();
		TRANGTHAI trangthai = key(z);
		switch (trangthai)
		{
		case UP:
		{
			tt--;
			if (tt < 0)tt = n - 1;
			break;
		}
		case DOWN:
		{
			tt++;
			if (tt >= n)tt = 0;
			break;
		}
		case ENTER:
		{
			system("cls");
			if (tt == 0) SapXepNoiBotMalop = true;
			if (tt == 1) SapXepChonMalop = true;
			if (tt == 2) SapXepChenMalop = true;
			if (tt == 3) SapXepNhanhMalop = true;
			if (tt == 4) BackSx = true;
			return tt;
		}


		}
		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	}
}
int display::menutuychonsapxepNamSinh(str thaotacmenutuychonsapxep[], int n)
{
	int tt = 0;// bien chon vao thao tac nao thi thao tac do doi mau
	int *mau = new int[n];

	for (int i = 0; i < n; i++)
		mau[i] = MAUCHU;
	mau[0] = MAUNEN;
	while (1)
	{
		clrscr();
		TextColor(8);
		gotoXY(50, 7);
		cout << "------------MENU---------------";

		for (int i = 0; i < n; i++)
		{
			gotoXY(50, 8 + i);
			TextColor(mau[i]);
			cout << thaotacmenutuychonsapxep[i] << endl;
		}
		TextColor(8);
		gotoXY(50, 8 + n);
		cout << "-------------------------------";
		int z = _getch();
		TRANGTHAI trangthai = key(z);
		switch (trangthai)
		{
		case UP:
		{
			tt--;
			if (tt < 0)tt = n - 1;
			break;
		}
		case DOWN:
		{
			tt++;
			if (tt >= n)tt = 0;
			break;
		}
		case ENTER:
		{
			system("cls");
			if (tt == 0) SapXepNoiBotNamSinh = true;
			if (tt == 1) SapXepChonNamSinh = true;
			if (tt == 2) SapXepChenNamSinh = true;
			if (tt == 3) SapXepNhanhNamSinh = true;
			if (tt == 4) BackSx = true;
			return tt;
		}


		}
		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	}
}
int display::menutuychonsapxepMsv(str thaotacmenutuychonsapxep[], int n)
{
	int tt = 0;// bien chon vao thao tac nao thi thao tac do doi mau
	int *mau = new int[n];

	for (int i = 0; i < n; i++)
		mau[i] = MAUCHU;
	mau[0] = MAUNEN;
	while (1)
	{
		clrscr();
		TextColor(8);
		gotoXY(50, 7);
		cout << "------------MENU---------------";

		for (int i = 0; i < n; i++)
		{
			gotoXY(50, 8 + i);
			TextColor(mau[i]);
			cout << thaotacmenutuychonsapxep[i] << endl;
		}
		TextColor(8);
		gotoXY(50, 8 + n);
		cout << "-------------------------------";
		int z = _getch();
		TRANGTHAI trangthai = key(z);
		switch (trangthai)
		{
		case UP:
		{
			tt--;
			if (tt < 0)tt = n - 1;
			break;
		}
		case DOWN:
		{
			tt++;
			if (tt >= n)tt = 0;
			break;
		}
		case ENTER:
		{
			system("cls");
			if (tt == 0) SapXepNotBotMsv = true;
			if (tt == 1) SapXepChonMsv = true;
			if (tt == 2) SapXepChenMsv = true;
			if (tt == 3) SapXepNhanhMsv = true;
			if (tt == 4) BackSx = true;
			return tt;
		}


		}
		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	}
}
int display::menutuychontimkiem(str thaotacmenutimkiem[], int n)
{
	int tt = 0;// bien chon vao thao tac nao thi thao tac do doi mau
	int *mau = new int[n];

	for (int i = 0; i < n; i++)
		mau[i] = MAUCHU;
	mau[0] = MAUNEN;
	while (1)
	{
		clrscr();
		TextColor(8);
		gotoXY(50, 7);
		cout << "------------MENU---------------";

		for (int i = 0; i < n; i++)
		{
			gotoXY(50, 8 + i);
			TextColor(mau[i]);
			cout << thaotacmenutimkiem[i] << endl;
		}
		TextColor(8);
		gotoXY(50, 8 + n);
		cout << "-------------------------------";
		int z = _getch();
		TRANGTHAI trangthai = key(z);
		switch (trangthai)
		{
		case UP:
		{
			tt--;
			if (tt < 0)tt = n - 1;
			break;
		}
		case DOWN:
		{
			tt++;
			if (tt >= n)tt = 0;
			break;
		}
		case ENTER:
		{
			system("cls");
			if (tt == 0) TimKiemTuanTu = true;
			if (tt == 1) TimKiemNhiPhan = true;
			if (tt == 2) BackTimkiem= true;
			return tt;
		}


		}
		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	}
}