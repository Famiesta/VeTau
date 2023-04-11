#include <iostream>
#include "VeTauHoa.h"
#define MAX 100

void Xuat(VeTauHoa vth[],int n) {
	cout << left << setw(15) << "SO_HIEU";
	cout << left << setw(20) << "DIEM_DEN";
	cout << left << setw(20) << "DIEM_DI";
	cout << left << setw(20) << "HANH_TRINH";
	cout << left << setw(15) << "HANG_GHE";
	cout << left << setw(15) << "GIA_VE" << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < n; i++) {
		cout << vth[i] << endl;
	}
}
int main()
{	
	VeTauHoa v;
	int n=0;
	cout << "Nhap vao so luong ve tau can nhap: ";
	cin >> n;
	cin.ignore();
	VeTauHoa vth[MAX];
	for (int i = 0; i < n; i++) {
		cout << "Thong tin ve tau hoa thu " << i + 1 << endl;
		cin >> vth[i];
	}
	cout << "------------------------------------THONG TIN VE VUA NHAP----------------------------------------" << endl;
	Xuat(vth, n);
	cout << "THONG TIN VE TAU CO GIA CAO NHAT" << endl;
	double max = vth[0].getGiaVe();
	for (int i = 1; i < n; i++) {
		if (max < vth[i].getGiaVe())
			max = vth[i].getGiaVe();
	}
	for (int i = 0; i < n; i++) {
		if (max == vth[i].getGiaVe())
			cout << vth[i] << endl;
	}
	cout << "----------------THONG TIN VE TAY DUOC SAP XEP GIAM DAN DUA TREN DO DAI HANH TRINH----------------" << endl;
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (vth[j].getDoDaiHanhTrinh() > vth[j - 1].getDoDaiHanhTrinh()) {
				v = vth[j];
				vth[j] = vth[j - 1];
				vth[j - 1] = v;
			}
		}
	}
	Xuat(vth, n);
}

