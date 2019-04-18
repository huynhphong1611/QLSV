#include "SinhVien.h"
#include <string>
SinhVien::SinhVien()
{

}
SinhVien::SinhVien(string hoten ,string ngaysinh,string msv,string malop,float diem)
{
    this->hoten =ChuanHoaHoTen(XoaKhoangCach(hoten));
    this->ngaysinh=ngaysinh;
    this->msv=ChuanHoaHoTen(msv);
    this->malop=ChuanHoaHoTen(malop);
    this->diem=diem;
}
void SinhVien::nhap()
{
    fflush(stdin);
    string temp;
    getline(filein,temp);
    getline(filein,hoten,',');
    hoten = ChuanHoaHoTen(XoaKhoangCach(hoten));
    getline(filein,ngaysinh,',');
    getline(filein,malop,',');
	malop = ChuanHoaHoTen(XoaKhoangCach(malop));
    getline(filein,msv,',');
    filein>>diem;
}
string SinhVien::ChuanHoaHoTen(string HT)
{
    int i=0;
	int n=HT.length();

	while(i<n)
	{
		if((HT[i]>='a')&&(HT[i]<='z'))
			HT[i]-=32;
		i++;
		while(HT[i]!=' '&&i<n){
			if((HT[i]>='A')&&(HT[i]<='Z')){
				HT[i]+=32;
				i++;
			}
			else{
				i++;
			}
		}
		if(i<n)
			i++;
		else
			break;
	}
return HT;
}
string SinhVien::XoaKhoangCach(string HT)
{
    //Xoa khoang cach dau chuoi
    while(HT[0]==' '){
    	HT=XoaKiTu(HT,0);
	}
    //Xoa khoang cach o giua
    int cd=HT.length()-1;
    for(int i=0;i<cd;i++)
    {
        while(HT[i]==' '&&HT[i+1]==' '&&i<cd){
        	HT=XoaKiTu(HT,i);
        	cd--;
    	}
    }
    //Xoa khoang cach cuoi
    int k=HT.length()-1;
    while(HT[k]==' ')
    {
        HT[k]=0;
        k--;
    }
    return HT;
}
string SinhVien::XoaKiTu(string HT,int temp)
{
     int i, cd=HT.length();
    for(i=temp;i<cd;i++)
       HT[i]=HT[i+1];
       return HT;
}
void SinhVien::XuatSinhVien()
{
	
		cout << setw(20) << hoten;
		cout << setw(15) << ngaysinh;
		cout << setw(15) << malop;
		cout << setw(15) << msv;
		cout << setw(15) << diem << endl;

}


