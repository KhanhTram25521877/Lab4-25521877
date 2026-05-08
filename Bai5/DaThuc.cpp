#include "DaThuc.h"
#include <cmath>

DaThuc::DaThuc(int bac) {
    this->bac = bac;

    heSo.resize(bac + 1, 0);
}

void DaThuc::Nhap() {
    cout << "Nhap bac da thuc: ";
    cin >> bac;

    heSo.resize(bac + 1);

    for (int i = bac; i >= 0; i--) {
        cout << "He so x^" << i << ": ";
        cin >> heSo[i];
    }
}

void DaThuc::Xuat() {
    bool dauTien = true;

    for (int i = bac; i >= 0; i--) {
        if (heSo[i] == 0)
            continue;

        if (!dauTien && heSo[i] > 0)
            cout << " + ";

        if (heSo[i] < 0)
            cout << " - ";

        double giaTri = abs(heSo[i]);

        if (i == 0)
            cout << giaTri;
        else if (i == 1)
            cout << giaTri << "x";
        else
            cout << giaTri << "x^" << i;

        dauTien = false;
    }

    if (dauTien)
        cout << "0";
}

double DaThuc::TinhGiaTri(double x) {
    double tong = 0;

    for (int i = 0; i <= bac; i++) {
        tong += heSo[i] * pow(x, i);
    }

    return tong;
}

DaThuc DaThuc::operator+(const DaThuc& other) {
    int maxBac = max(bac, other.bac);

    DaThuc ketQua(maxBac);

    for (int i = 0; i <= maxBac; i++) {
        double a = (i <= bac) ? heSo[i] : 0;
        double b = (i <= other.bac) ? other.heSo[i] : 0;

        ketQua.heSo[i] = a + b;
    }

    return ketQua;
}

DaThuc DaThuc::operator-(const DaThuc& other) {
    int maxBac = max(bac, other.bac);

    DaThuc ketQua(maxBac);

    for (int i = 0; i <= maxBac; i++) {
        double a = (i <= bac) ? heSo[i] : 0;
        double b = (i <= other.bac) ? other.heSo[i] : 0;

        ketQua.heSo[i] = a - b;
    }

    return ketQua;
}

DaThuc DaThuc::operator*(const DaThuc& other) {
    DaThuc ketQua(bac + other.bac);

    for (int i = 0; i <= bac; i++) {
        for (int j = 0; j <= other.bac; j++) {
            ketQua.heSo[i + j] += heSo[i] * other.heSo[j];
        }
    }

    return ketQua;
}
