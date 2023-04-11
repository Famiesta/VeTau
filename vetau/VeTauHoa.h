#include"Ve.h"
class VeTauHoa:public Ve
{
private:
	int hangGhe;
	double donGiaVe;
	double giaVe;
public:
	VeTauHoa() {
		Ve::setSoHieu("");
		Ve::setDiemDen("");
		Ve::setDiemDi("");
		Ve::setDoDaiHanhTrinh(0);
		hangGhe = 0;
		donGiaVe = 0;
	}
	VeTauHoa(string soHieu, string diemDen, string diemDi, int doDai, int hangGhe, double donGiaVe) {
		Ve::setSoHieu(soHieu);
		Ve::setDiemDen(diemDen);
		Ve::setDiemDi(diemDi);
		Ve::setDoDaiHanhTrinh(doDai);
		this->hangGhe = hangGhe;
		this->donGiaVe = donGiaVe;
	}
	~VeTauHoa() {
	}
	void setHangGhe(int hangGhe) {
		this->hangGhe = hangGhe;
	}
	int getHangGhe() {
		return hangGhe;
	}
	void setDonGiaGhe(double donGiaVe) {
		this->donGiaVe = donGiaVe;
	}
	double getDonGiaVe() {
		return donGiaVe;
	}
	void setGiaVe() {
		float hshg;
		if (hangGhe == 2)
			hshg = 1;
		else if (hangGhe == 1)
			hshg = 1.2;
		if (getDoDaiHanhTrinh() <= 1200)
			giaVe = donGiaVe * hshg;
		else giaVe = donGiaVe * 1.2 * hshg;
	}
	double getGiaVe() {
		return giaVe;
	}
	friend istream& operator >>(istream& is, VeTauHoa& vth) {
		vth.Ve::nhapVe();
		int hg;
		double gia;
		cout << "Nhap vao so hang ghe: ";
		cin >> hg;
		cin.ignore();
		vth.setHangGhe(hg);
		cout << "Nhap vao don gia ve: ";
		cin >> gia;
		cin.ignore();
		vth.setDonGiaGhe(gia);
		vth.setGiaVe();
		return is;
	}
	friend ostream& operator <<(ostream& os, VeTauHoa& vth) {
		vth.Ve::inVe();
		cout << left << setw(15) << vth.getHangGhe();
		cout << left << setw(15) << vth.getGiaVe() << endl;
		return os;
	}
};

