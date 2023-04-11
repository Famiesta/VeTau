#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Ve
{
private:
	string soHieu;
	string diemDen;
	string diemDi;
	int doDaiHanhTrinh;
public :
	Ve() {
		soHieu = "";
		diemDen = "";
		diemDi = "";
		doDaiHanhTrinh = 0;
	}
	Ve(string soHieu, string diemDen, string diemDi, int doDaiHanhTrinh) {
		this->soHieu = soHieu;
		this->diemDen = diemDen;
		this->diemDi = diemDi;
		this->doDaiHanhTrinh = doDaiHanhTrinh;
	}
	~Ve() {
	}
	void setSoHieu(string soHieu) {
		this->soHieu = soHieu;
	}
	string getSoHieu() {
		return soHieu;
	}
	void setDiemDen(string diemDen) {
		this->diemDen = diemDen;
	}
	string getDiemDen() {
		return diemDen;
	}
	void setDiemDi(string diemDi) {
		this->diemDi = diemDi;
	}
	string getDiemDi() {
		return diemDi;
	}
	void setDoDaiHanhTrinh(int doDaiHanhTrinh) {
		this->doDaiHanhTrinh = doDaiHanhTrinh;
	}
	int getDoDaiHanhTrinh() {
		return doDaiHanhTrinh;
	}
	void nhapVe() {
		string sh, den, di;
		int dai;
		cout << "Nhap vao so hieu: ";
		getline(cin, sh);
		setSoHieu(sh);
		cout << "Nhap vao diem den: ";
		getline(cin, den);
		setDiemDen(den);
		cout << "Nhap vao diem di: ";
		getline(cin, di);
		setDiemDi(di);
		cout << "Nhap vao do dai hanh trinh: ";
		cin >> dai;
		cin.ignore();
		setDoDaiHanhTrinh(dai);
	}
	void inVe() {
		cout << left << setw(15) << getSoHieu();
		cout << left << setw(20) << getDiemDen();
		cout << left << setw(20) << getDiemDi();
		cout << left << setw(20) << getDoDaiHanhTrinh();
	}
};

