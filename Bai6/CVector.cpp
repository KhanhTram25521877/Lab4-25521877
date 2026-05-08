#include "CVector.h"
#include <cmath>

CVector::CVector(int SoChieu) {
    this->SoChieu = SoChieu;

    ToaDo.resize(SoChieu, 0);
}

void CVector::Nhap() {
    cout << "Nhap so chieu: ";
    cin >> SoChieu;

    ToaDo.resize(SoChieu);

    for (int i = 0; i < SoChieu; i++) {
        cout << "Toa do [" << i << "]: ";
        cin >> ToaDo[i];
    }
}

void CVector::Xuat() {
    cout << "(";

    for (int i = 0; i < SoChieu; i++) {
        cout << ToaDo[i];

        if (i != SoChieu - 1)
            cout << ", ";
    }

    cout << ")";
}

double CVector::DoDai() {
    double Tong = 0;

    for (int i = 0; i < SoChieu; i++) {
        Tong += ToaDo[i] * ToaDo[i];
    }

    return sqrt(Tong);
}

CVector CVector::operator+(const CVector& other) {
    CVector KetQua(SoChieu);

    for (int i = 0; i < SoChieu; i++) {
        KetQua.ToaDo[i] =
            ToaDo[i] + other.ToaDo[i];
    }

    return KetQua;
}

CVector CVector::operator-(const CVector& other) {
    CVector KetQua(SoChieu);

    for (int i = 0; i < SoChieu; i++) {
        KetQua.ToaDo[i] =
            ToaDo[i] - other.ToaDo[i];
    }

    return KetQua;
}

double CVector::operator*(const CVector& other) {
    double Tong = 0;

    for (int i = 0; i < SoChieu; i++) {
        Tong += ToaDo[i] * other.ToaDo[i];
    }

    return Tong;
}
