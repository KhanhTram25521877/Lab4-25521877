#include "CTime.h"
using namespace std;

CTime::CTime(int gio, int phut, int giay) {
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;

    chuanHoa();
}

void CTime::chuanHoa() {
    int tong = gio * 3600 + phut * 60 + giay;

    tong %= 86400;

    if (tong < 0)
        tong += 86400;

    gio = tong / 3600;
    tong %= 3600;

    phut = tong / 60;
    giay = tong % 60;
}

CTime CTime::operator+(int x) {
    int tong = gio * 3600 + phut * 60 + giay + x;

    return CTime(0, 0, tong);
}

CTime CTime::operator-(int x) {
    int tong = gio * 3600 + phut * 60 + giay - x;

    return CTime(0, 0, tong);
}

CTime& CTime::operator++() {
    giay++;
    chuanHoa();

    return *this;
}

CTime& CTime::operator--() {
    giay--;
    chuanHoa();

    return *this;
}

istream& operator>>(istream& in, CTime& t) {
    in >> t.gio >> t.phut >> t.giay;

    t.chuanHoa();

    return in;
}

ostream& operator<<(ostream& out, const CTime& t) {
    if (t.gio < 10) out << "0";
    out << t.gio << ":";

    if (t.phut < 10) out << "0";
    out << t.phut << ":";

    if (t.giay < 10) out << "0";
    out << t.giay;

    return out;
}
