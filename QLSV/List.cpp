#include "List.h"
#include <iomanip>
using namespace std;
void List::show() 
{
	int j = 0;
	gotoXY(15, 5); cout << "                               DANH SACH SINH VIEN                                \n";
	gotoXY(15, 6); cout << "----------------------------------------------------------------------------------\n";
	gotoXY(15, 7); cout << "|       HO VA TEN       |   NGAY SINH   |   MA LOP   |   MA SINH VIEN   |  DIEM  |\n";
	gotoXY(15, 8); cout << "----------------------------------------------------------------------------------\n";
	for(int i=0;i<size;i++) {

		gotoXY(18, 9 + j); cout << sv[i].GetHoten();
		gotoXY(42, 9 + j); cout << sv[i].GetNgaySinh();
		gotoXY(57, 9 + j); cout << sv[i].GetMaLop();
		gotoXY(73, 9 + j); cout << sv[i].GetMsv();
		gotoXY(90, 9 + j); cout << sv[i].GetDiem();
		j++;
	}
	filein.close();

}
void List::nhap()
{
	filein >> size;
	for (int i = 0; i < size; i++)
	{
		sv[i].nhap();
	}

}
void List::showfile() {
	ofstream outfile("DANHSACHSINHVIEN.txt");
	outfile << "                               DANH SACH SINH VIEN                                \n";
	outfile << "----------------------------------------------------------------------------------\n";
	outfile << "|       HO VA TEN       |   NGAY SINH   |   MA LOP   |   MA SINH VIEN   |  DIEM  |\n";
	outfile << "----------------------------------------------------------------------------------\n";
	for (int i = 0; i < size; i++)
	{
		outfile << setw(20) << sv[i].GetHoten();
		outfile << setw(15) << sv[i].GetNgaySinh();
		outfile << setw(15) << sv[i].GetMaLop();
		outfile << setw(15) << sv[i].GetMsv();
		outfile << setw(15) << sv[i].GetDiem() << endl;
	}
}
void List::Them_Thong_Tin()
{
	string Hoten, malop, msv, hoten, ngaysinh;
	int ngay, thang, nam, ngaymax;
	bool check = true;
	float diem;
	int n;
	cout << "nhap so sinh vien can them: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin sinh vien thu " << i + 1 << ": ";
		cout << "\nNhap Ho va Ten sinh vien: ";
		cin.ignore();
		getline(cin, Hoten);
		do
		{
			cout << "\nNhap ngay : ";
			cin >> ngay;
			cout << "\nNhap thang : ";
			cin >> thang;
			cout << "\nNhap nam : ";
			cin >> nam;
			if (nam < 1969 || thang < 0 || thang> 12 || ngay < 0 || ngay> 31||nam>9999)
			{
				check = false;
				cout << "\nMoi nhap lai!!!";
			}
			else
			{
				switch (thang)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					ngaymax = 31;
					break;
				case 2:
					if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
						ngaymax = 29;
					else
						ngaymax = 28;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					ngaymax = 30;
					break;
				}
				if (ngay <= ngaymax)
				{
					check = true;
				}
				else
				{
					check = false;
					cout << "\nMoi nhap lai!!!";
				}
			}
		} while (!check);
		ngaysinh = to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam);
		cin.ignore();
		cout << "nhap ma lop sinh vien: ";
		getline(cin, malop);
	KtMsv:
		{
			cout << "\nYeu cau MSV co 8 ki tu.";
			cout << " Nhap ma sinh vien: ";
			
			getline(cin, msv);
		}
		if (msv.length() != 8) goto KtMsv;
	KtDiem:
		{
			cout << "nhap diem trung binh: ";
			cin >> diem;
		}
		if (diem < 0 || diem>10) goto KtDiem;
		SinhVien svTemp =  SinhVien(Hoten, ngaysinh, msv, malop, diem);
		int j = size;
		sv[j] = svTemp;
		size++;
	}
}
void List::updateFileIn()
{
	ofstream updatefilein;
	updatefilein.open("SINHVIEN1.txt" , ios ::out);
	updatefilein << size  << endl;
	for (int i = 0; i < size; i++)
	{
		updatefilein << sv[i].GetHoten() << "," << sv[i].GetNgaySinh() << "," << sv[i].GetMaLop() << "," << sv[i].GetMsv() << "," << sv[i].GetDiem() << endl;

	}

}
void List::SapXepNoiBotTen()
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (sv[j].GetTen() > sv[j + 1].GetTen()) {
				HoanVi(sv[j], sv[j + 1]);
			}
		}
	}
			
}
void List::SapXepNoiBotDiem()
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (sv[j].GetDiem() > sv[j + 1].GetDiem()) {
				HoanVi(sv[j], sv[j + 1]);
			}
		}
	}
}
void List::SapXepNoiBotMsv()
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (sv[j].GetMsvSx() > sv[j + 1].GetMsvSx()) {
				HoanVi(sv[j], sv[j + 1]);
			}
		}
	}
}
void List::SapXepNoiBotNamSinh()
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1-i; j++) {
			if (sv[j].GetNam() > sv[j + 1].GetNam()) {
				HoanVi(sv[j], sv[j + 1]);
			}
		}
	}
}
void List::SapXepNoiBotMalop()
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (sv[j].GetLop() > sv[j + 1].GetLop()) {
				HoanVi(sv[j], sv[j + 1]);
			}
		}
	}

}
int List::partitionTen(int low, int high)
{
	char pivot = sv[high].GetTen();    // pivot
	int left = low-1;
	for (int right = low; right < high; right++)
	{
		if (sv[right].GetTen() < pivot)
		{
			left++;
			HoanVi(sv[left], sv[right]);
		}
	}
	
	HoanVi(sv[left+1], sv[high]);
	return (left+1);
}
int List::partitionDiem(int low, int high)
{
	float pivot = sv[high].GetDiem();    // pivot
	int left = low - 1;
	for (int right = low; right < high; right++)
	{
		if (sv[right].GetDiem() < pivot)
		{
			left++;
			HoanVi(sv[left], sv[right]);
		}
	}

	HoanVi(sv[left + 1], sv[high]);
	return (left + 1);
}
int List::partitionMsv(int low, int high)
{
	int pivot = sv[high].GetMsvSx();    // pivot
	int left = low - 1;
	for (int right = low; right < high; right++)
	{
		if (sv[right].GetMsvSx() < pivot)
		{
			left++;
			HoanVi(sv[left], sv[right]);
		}
	}

	HoanVi(sv[left + 1], sv[high]);
	return (left + 1);
}
int List::partitionNamSinh(int low, int high)
{
	int pivot = sv[high].GetNam();    // pivot
	int left = low - 1;
	for (int right = low; right < high; right++)
	{
		if (sv[right].GetNam() < pivot)
		{
			left++;
			HoanVi(sv[left], sv[right]);
		}
	}

	HoanVi(sv[left + 1], sv[high]);
	return (left + 1);
}
int List::partitionMalop(int low, int high)
{
	char pivot = sv[high].GetLop();    // pivot
	int left = low - 1;
	for (int right = low; right < high; right++)
	{
		if (sv[right].GetLop() < pivot)
		{
			left++;
			HoanVi(sv[left], sv[right]);
		}
	}

	HoanVi(sv[left + 1], sv[high]);
	return (left + 1);
}
void List::SapXepNhanhTen(int low, int high)
{

	if (low < high)
	{
		/* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
		 và là phần tử chia mảng làm 2 mảng con trái & phải */
		int pi = partitionTen(low, high);

		SapXepNhanhTen(low, pi - 1);
		SapXepNhanhTen(pi + 1, high);
	}
}
void List::SapXepNhanhMalop(int low, int high)
{

	if (low < high)
	{
		/* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
		 và là phần tử chia mảng làm 2 mảng con trái & phải */
		int pi = partitionMalop(low, high);

		SapXepNhanhMalop(low, pi - 1);
		SapXepNhanhMalop(pi + 1, high);
	}
}
void List::SapXepNhanhDiem(int low, int high)
{

	if (low < high)
	{
		/* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
		 và là phần tử chia mảng làm 2 mảng con trái & phải */
		int pi = partitionDiem(low, high);

		SapXepNhanhDiem(low, pi - 1);
		SapXepNhanhDiem(pi + 1, high);
	}
}
void List::SapXepNhanhMsv(int low, int high)
{

	if (low < high)
	{
		/* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
		 và là phần tử chia mảng làm 2 mảng con trái & phải */
		int pi = partitionMsv(low, high);

		SapXepNhanhMsv(low, pi - 1);
		SapXepNhanhMsv(pi + 1, high);
	}
}
void List::SapXepNhanhNamSinh(int low, int high)
{

	if (low < high)
	{
		/* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
		 và là phần tử chia mảng làm 2 mảng con trái & phải */
		int pi = partitionNamSinh(low, high);

		SapXepNhanhNamSinh(low, pi - 1);
		SapXepNhanhNamSinh(pi + 1, high);
	}
}
void List::SapXepChonTen()
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (sv[j].GetTen() < sv[min].GetTen()) min = j;
			HoanVi(sv[min], sv[i]);
		}
	}
}
void List::SapXepChonMalop()
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (sv[j].GetLop() < sv[min].GetLop()) min = j;
			HoanVi(sv[min], sv[i]);
		}
	}
}
void List::SapXepChonDiem()
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (sv[j].GetDiem() < sv[min].GetDiem()) min = j;
			HoanVi(sv[min], sv[i]);
		}
	}
}
void List::SapXepChonMsv()
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (sv[j].GetMsvSx() < sv[min].GetMsvSx()) min = j;
			HoanVi(sv[min], sv[i]);
		}
	}
}
void List::SapXepChonNamSinh()
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (sv[j].GetNam() < sv[min].GetNam()) min = j;
			HoanVi(sv[min], sv[i]);
		}
	}
}
void List::SapXepChenTen()
{
	for (int i = 1; i < size; i++)
	{
		int j = i - 1;
		char t = sv[i].GetTen();
		while (j >= 0 && t < sv[j].GetTen())
		{
			HoanVi(sv[j + 1], sv[j]);
			j--;
		}
		char temp = sv[j + 1].GetTen();
		temp=t;
	}
}
void List::SapXepChenMalop()
{
	for (int i = 1; i < size; i++)
	{
		int j = i - 1;
		char t = sv[i].GetLop();
		while (j >= 0 && t < sv[j].GetLop())
		{
			HoanVi(sv[j + 1] , sv[j]);
			j--;
		}
		char temp = sv[j + 1].GetLop();
		temp = t;
	}
}
void List::SapXepChenDiem()
{
	for (int i = 1; i < size; i++)
	{
		int j = i - 1;
		float t = sv[i].GetDiem();
		while (j >= 0 && t < sv[j].GetDiem())
		{
			HoanVi(sv[j + 1], sv[j]);
			j--;
		}
		float temp = sv[j + 1].GetDiem();
		temp = t;
	}
}
void List::SapXepChenMsv()
{
	for (int i = 1; i < size; i++) //1 3 2  
	{
		int j = i - 1;
		int t = sv[i].GetMsvSx();
		while (j >= 0 && t < sv[j].GetMsvSx())
		{
			HoanVi(sv[j + 1], sv[j]);
			j--;
		}
		int temp = sv[j + 1].GetMsvSx();
		temp = t;
	}
}
void List::SapXepChenNamSinh()
{
	for (int i = 1; i < size; i++)
	{
		int j = i - 1;
		int t = sv[i].GetNam();
		while (j >= 0 && t < sv[j].GetNam())
		{
			HoanVi(sv[j + 1], sv[j]);
			j--;
		}
		int temp = sv[j+1].GetNam();
		temp = t;
	}
}
// timkiem
bool List::TimKiemTuanTu()
{

		cout << "\nBan muon tim kiem thong tin theo?";
		cout << "\n1.Ho vaTen\n2.NgaySinh\n3.Ma lop\n4.Ma Sinh Vien\n5.Diem\n";
		int chon;
		int checkexitmenu;
	TuyChon:
		{
			cout << "\nBan chon: ";
			cin >> chon;
		}
		if (chon < 1 || chon>5)
		{
			cout << "\nBan chon sai , moi chon lai.";
			goto TuyChon;
		}
		switch (chon)
		{
		case 1:
		{
			int check = 0;
			string hotentimkiem;
			cout << "\nDinh dang ho ten viet hoa chu cai dau.";
			cout << "\nNhap thong tin ho ten can tim kiem: ";
			cin.ignore();
			getline(cin, hotentimkiem);
			cout << "                               DANH SACH SINH VIEN                                \n";
			cout << "----------------------------------------------------------------------------------\n";
			cout << "|       HO VA TEN       |   NGAY SINH   |   MA LOP   |   MA SINH VIEN   |  DIEM  |\n";
			cout << "----------------------------------------------------------------------------------\n";
			for (int i = 0; i < size; i++)
			{
				if (hotentimkiem._Equal(sv[i].GetHoten()))
				{
					sv[i].XuatSinhVien();
					check++;
				}
			}
			if (check == 0) cout << "\nKhong co thong tin can tim";
			cout << "\nBan co muon thoat ra khong?(y/n)";
			char checkexit;
			cin >> checkexit;
			if (checkexit == 'y')
				checkexitmenu= 1;
			else checkexitmenu= 0;
			break;
		}

		case 2:
		{
			int check = 0;
			string ngaysinhtimkiem;
			cout << "\nDinh dang ngay sinh dd/mm/yyyy.";
			cout << "\nNhap thong tin ngay sinh can tim kiem: ";
			cin.ignore();
			getline(cin, ngaysinhtimkiem);
			cout << "                               DANH SACH SINH VIEN                                \n";
			cout << "----------------------------------------------------------------------------------\n";
			cout << "|       HO VA TEN       |   NGAY SINH   |   MA LOP   |   MA SINH VIEN   |  DIEM  |\n";
			cout << "----------------------------------------------------------------------------------\n";
			for (int i = 0; i < size; i++)
			{
				if (ngaysinhtimkiem._Equal(sv[i].GetNgaySinh()))
				{
					sv[i].XuatSinhVien();
					check++;
				}
			}
			if (check == 0) cout << "\nKhong co thong tin can tim";
			cout << "\nBan co muon thoat ra khong?(y/n)";
			char checkexit;
			cin >> checkexit;
			if (checkexit == 'y')
				checkexitmenu = 1;
			else checkexitmenu = 0;
			break;
		}
		case 3:
		{
			int check = 0;
			string maloptimkiem;
			cout << "\nNhap thong tin ma lop can tim kiem: ";
			cin.ignore();
			getline(cin, maloptimkiem);
			cout << "                               DANH SACH SINH VIEN                                \n";
			cout << "----------------------------------------------------------------------------------\n";
			cout << "|       HO VA TEN       |   NGAY SINH   |   MA LOP   |   MA SINH VIEN   |  DIEM  |\n";
			cout << "----------------------------------------------------------------------------------\n";
			for (int i = 0; i < size; i++)
			{
				if (maloptimkiem._Equal(sv[i].GetMaLop()))
				{
					sv[i].XuatSinhVien();
					check++;
				}
			}
			if (check == 0) cout << "\nKhong co thong tin can tim";
			cout << "\nBan co muon thoat ra khong?(y/n)";
			char checkexit;
			cin >> checkexit;
			if (checkexit == 'y')
				checkexitmenu = 1;
			else checkexitmenu = 0;
			break;
		}
		case 4:
		{
			int check = 0;
			string msvtimkiem;
			cout << "\nMa sinh vien co 8 ki tu.";
			cout << "\nNhap thong tin ma sinh vien can tim kiem: ";
			cin.ignore();
			getline(cin, msvtimkiem);
			cout << "                               DANH SACH SINH VIEN                                \n";
			cout << "----------------------------------------------------------------------------------\n";
			cout << "|       HO VA TEN       |   NGAY SINH   |   MA LOP   |   MA SINH VIEN   |  DIEM  |\n";
			cout << "----------------------------------------------------------------------------------\n";
			for (int i = 0; i < size; i++)
			{
				if (msvtimkiem._Equal(sv[i].GetMsv()))
				{
					sv[i].XuatSinhVien();
					check++;
				}
			}
			if (check == 0) cout << "\nKhong co thong tin can tim";
			cout << "\nBan co muon thoat ra khong?(y/n)";
			char checkexit;
			cin >> checkexit;
			if (checkexit == 'y')
				checkexitmenu = 1;
			else checkexitmenu = 0;
			break;
		}
		case 5:
		{
			int check = 0;
			float diemtimkiem;
			cout << "\nNhap thong tin diem can tim kiem: ";
			cin >> diemtimkiem;
			cout << "                               DANH SACH SINH VIEN                                \n";
			cout << "----------------------------------------------------------------------------------\n";
			cout << "|       HO VA TEN       |   NGAY SINH   |   MA LOP   |   MA SINH VIEN   |  DIEM  |\n";
			cout << "----------------------------------------------------------------------------------\n";
			for (int i = 0; i < size; i++)
			{
				if (diemtimkiem == sv[i].GetDiem())
				{
					sv[i].XuatSinhVien();
					check++;
				}
			}
			if (check == 0) cout << "\nKhong co thong tin can tim";
			cout << "\nBan co muon thoat ra khong?(y/n)";
			char checkexit;
			cin >> checkexit;
			if (checkexit == 'y')
				checkexitmenu = 1;
			else checkexitmenu = 0;
			break;
		}
		}
		if (checkexitmenu == 1)return true;
		else return false;
}
bool List::TimKiemNhiPhan()
{
		cout << "\nBan muon tim kiem thong tin theo?";
		cout << "\n1.Ho vaTen\n2.NgaySinh\n3.Ma lop\n4.Ma Sinh Vien\n5.Diem\n";
		int chon;
		int checkexitmenu;
	TuyChon:
		{
			cout << "\nBan chon: ";
			cin >> chon;
		}
		if (chon < 1 || chon>5)
		{
			cout << "\nBan chon sai , moi chon lai.";
			goto TuyChon;
		}
		switch (chon)
		{
			case 4:
			{
				int j;
				int check = 0;
				string msvtimkiem;
				cout << "\nMa sinh vien co 8 ki tu.";
				cout << "\nNhap thong tin ma sinh vien can tim kiem: ";
				cin.ignore();
				getline(cin, msvtimkiem);
				cout << "                               DANH SACH SINH VIEN                                \n";
				cout << "----------------------------------------------------------------------------------\n";
				cout << "|       HO VA TEN       |   NGAY SINH   |   MA LOP   |   MA SINH VIEN   |  DIEM  |\n";
				cout << "----------------------------------------------------------------------------------\n";
				for (int i = 0; i < size; i++)
				{
					BinarySearchMsv(0, size - 1, msvtimkiem, sv[i].GetMsv());
				}
				if (check == 0) cout << "\nKhong co thong tin can tim";
				cout << "\nBan co muon thoat ra khong?(y/n)";
				char checkexit;
				cin >> checkexit;
				if (checkexit == 'y')
					checkexitmenu = 1;
				else checkexitmenu = 0;
				break;
			}
			case 5:
			{
				int j;
				int check = 0;
				float diemtimkiem;
				cout << "\nNhap thong tin diem can tim kiem: ";
				cin >> diemtimkiem;
				cout << "                               DANH SACH SINH VIEN                                \n";
				cout << "----------------------------------------------------------------------------------\n";
				cout << "|       HO VA TEN       |   NGAY SINH   |   MA LOP   |   MA SINH VIEN   |  DIEM  |\n";
				cout << "----------------------------------------------------------------------------------\n";
				for (int i = 0; i < size; i++)
				{
					BinarySearchDiem(0, size - 1, diemtimkiem, sv[i].GetDiem());					
				}
				if (check == 0) cout << "\nKhong co thong tin can tim";
				cout << "\nBan co muon thoat ra khong?(y/n)";
				char checkexit;
				cin >> checkexit;
				if (checkexit == 'y')
					checkexitmenu = 1;
				else checkexitmenu = 0;
				break;
			}
		}
		if (checkexitmenu == 1)return true;
		else return false;
}
void List::xoasinhvien(int delSv)
{
	for (int i = 0; i < size; i++)
	{
		if (delSv == i)
		{
			sv[i] = sv[i + 1];
			size--;
		}

	}
}
int List::BinarySearchDiem(int l, int r, float x,float timkiemDiem)
{
	
	if (r >= l) {
		int mid = l + (r - l) / 2; // Tương đương (l+r)/2 nhưng ưu điểm tránh tràn số khi l,r lớn

		// Nếu arr[mid] = x, trả về chỉ số và kết thúc.
		if (timkiemDiem == x)
			sv[mid].XuatSinhVien();
			return mid;

		// Nếu arr[mid] > x, thực hiện tìm kiếm nửa trái của mảng
		if (timkiemDiem > x)
			return BinarySearchDiem( l, mid - 1, x, timkiemDiem);

		// Nếu arr[mid] < x, thực hiện tìm kiếm nửa phải của mảng
		return BinarySearchDiem( mid + 1, r, x, timkiemDiem);
	}

	// Nếu không tìm thấy
	return -1;
}
int List::BinarySearchMsv(int r, int l, string x, string timkiemMsv) {
	if (r >= l) {
		int mid = l + (r - l) / 2; // Tương đương (l+r)/2 nhưng ưu điểm tránh tràn số khi l,r lớn

		// Nếu arr[mid] = x, trả về chỉ số và kết thúc.
		if (x._Equal(timkiemMsv))
			sv[mid].XuatSinhVien();
		    return mid;

		// Nếu arr[mid] > x, thực hiện tìm kiếm nửa trái của mảng
		if (timkiemMsv > x)
			return BinarySearchMsv(l, mid - 1, x, timkiemMsv);

		// Nếu arr[mid] < x, thực hiện tìm kiếm nửa phải của mảng
		return BinarySearchMsv(mid + 1, r, x, timkiemMsv);
	}

	// Nếu không tìm thấy
	return -1;
}




