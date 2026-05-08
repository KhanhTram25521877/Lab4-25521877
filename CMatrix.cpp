#include "CMatrix.h"
using namespace std;

CMatrix::CMatrix(int SoDong, int SoCot) {
    this->SoDong = SoDong;
    this->SoCot = SoCot;

    GiaTri.resize(
        SoDong,
        vector<double>(SoCot, 0)
    );
}

void CMatrix::Nhap() {
    cout << "Nhap so dong: ";
    cin >> SoDong;

    cout << "Nhap so cot: ";
    cin >> SoCot;

    GiaTri.resize(
        SoDong,
        vector<double>(SoCot)
    );

    for (int i = 0; i < SoDong; i++) {
        for (int j = 0; j < SoCot; j++) {
            cout << "a[" << i
                 << "][" << j << "] = ";

            cin >> GiaTri[i][j];
        }
    }
}

void CMatrix::Xuat() {
    for (int i = 0; i < SoDong; i++) {
        for (int j = 0; j < SoCot; j++) {
            cout << GiaTri[i][j] << " ";
        }

        cout << endl;
    }
}

CMatrix CMatrix::operator+(
    const CMatrix& other
) {
    CMatrix KetQua(SoDong, SoCot);

    for (int i = 0; i < SoDong; i++) {
        for (int j = 0; j < SoCot; j++) {
            KetQua.GiaTri[i][j] =
                GiaTri[i][j]
                + other.GiaTri[i][j];
        }
    }

    return KetQua;
}

CMatrix CMatrix::operator-(
    const CMatrix& other
) {
    CMatrix KetQua(SoDong, SoCot);

    for (int i = 0; i < SoDong; i++) {
        for (int j = 0; j < SoCot; j++) {
            KetQua.GiaTri[i][j] =
                GiaTri[i][j]
                - other.GiaTri[i][j];
        }
    }

    return KetQua;
}

CMatrix CMatrix::operator*(
    const CMatrix& other
) {
    CMatrix KetQua(
        SoDong,
        other.SoCot
    );

    for (int i = 0; i < SoDong; i++) {
        for (int j = 0; j < other.SoCot; j++) {

            KetQua.GiaTri[i][j] = 0;

            for (int k = 0; k < SoCot; k++) {
                KetQua.GiaTri[i][j]
                    += GiaTri[i][k]
                    * other.GiaTri[k][j];
            }
        }
    }

    return KetQua;
}

vector<double> CMatrix::NhanVector(
    const vector<double>& v
) {
    vector<double> KetQua(SoDong, 0);

    for (int i = 0; i < SoDong; i++) {
        for (int j = 0; j < SoCot; j++) {
            KetQua[i]
                += GiaTri[i][j] * v[j];
        }
    }

    return KetQua;
}
