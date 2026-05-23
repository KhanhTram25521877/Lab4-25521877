#include "PhanSo.h"
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return abs(a);
    return gcd(b, a % b);
}

PhanSo::PhanSo(int tu, int mau) {
    this->tu = tu;
    this->mau = mau;

    if (this->mau == 0) {
        cout << "Mau so khong hop le";
        exit(0);
    }

    rutGon();
}

void PhanSo::rutGon() {
    int ucln = gcd(tu, mau);

    tu /= ucln;
    mau /= ucln;

    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
}

PhanSo PhanSo::operator+(const PhanSo& other) {
    return PhanSo(
        tu * other.mau + other.tu * mau,
        mau * other.mau
    );
}

PhanSo PhanSo::operator-(const PhanSo& other) {
    return PhanSo(
        tu * other.mau - other.tu * mau,
        mau * other.mau
    );
}

PhanSo PhanSo::operator*(const PhanSo& other) {
    return PhanSo(
        tu * other.tu,
        mau * other.mau
    );
}

PhanSo PhanSo::operator/(const PhanSo& other) {
    if (other.tu == 0) {
        cout << "Khong the chia cho 0";
        exit(0);
    }

    return PhanSo(
        tu * other.mau,
        mau * other.tu
    );
}

bool PhanSo::operator==(const PhanSo& other) {
    return tu == other.tu && mau == other.mau;
}

bool PhanSo::operator>(const PhanSo& other) {
    return tu * other.mau > other.tu * mau;
}

bool PhanSo::operator<(const PhanSo& other) {
    return tu * other.mau < other.tu * mau;
}

istream& operator>>(istream& in, PhanSo& ps) {
    in >> ps.tu >> ps.mau;

    if (ps.mau == 0) {
        cout << "Mau so khong hop le";
        exit(0);
    }

    ps.rutGon();

    return in;
}

ostream& operator<<(ostream& out, const PhanSo& ps) {
    if (ps.mau == 1)
        out << ps.tu;
    else
        out << ps.tu << "/" << ps.mau;

    return out;
}
