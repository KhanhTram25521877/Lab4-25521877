#include "CDate.h"

CDate::CDate(int ngay, int thang, int nam) {
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;

    ChuanHoa();
}

bool CDate::KiemTraNamNhuan() {
    return (nam % 400 == 0) ||
           (nam % 4 == 0 && nam % 100 != 0);
}

int CDate::SoNgayTrongThang() {
    int ngayThang[] = {
        0,31,28,31,30,31,30,31,31,30,31,30,31
    };

    if (thang == 2 && KiemTraNamNhuan())
        return 29;

    return ngayThang[thang];
}

void CDate::ChuanHoa() {
    while (ngay > SoNgayTrongThang()) {
        ngay -= SoNgayTrongThang();

        thang++;

        if (thang > 12) {
            thang = 1;
            nam++;
        }
    }

    while (ngay <= 0) {
        thang--;

        if (thang <= 0) {
            thang = 12;
            nam--;
        }

        ngay += SoNgayTrongThang();
    }
}

CDate CDate::operator+(int x) {
    CDate temp = *this;

    temp.ngay += x;

    temp.ChuanHoa();

    return temp;
}

CDate CDate::operator-(int x) {
    CDate temp = *this;

    temp.ngay -= x;

    temp.ChuanHoa();

    return temp;
}

CDate& CDate::operator++() {
    ngay++;

    ChuanHoa();

    return *this;
}

CDate& CDate::operator--() {
    ngay--;

    ChuanHoa();

    return *this;
}

int CDate::operator-(const CDate& other) {
    CDate a = other;
    CDate b = *this;

    int dem = 0;

    while (a.ngay != b.ngay ||
           a.thang != b.thang ||
           a.nam != b.nam) {
        ++a;
        dem++;
    }

    return dem;
}

istream& operator>>(istream& in, CDate& d) {
    in >> d.ngay >> d.thang >> d.nam;

    d.ChuanHoa();

    return in;
}

ostream& operator<<(ostream& out, const CDate& d) {
    if (d.ngay < 10)
        out << "0";

    out << d.ngay << "/";

    if (d.thang < 10)
        out << "0";

    out << d.thang << "/";

    out << d.nam;

    return out;
}
