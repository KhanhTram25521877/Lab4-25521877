#ifndef PHANSO_H
#define PHANSO_H

#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu;
    int mau;

    void rutGon();

public:
    PhanSo(int tu = 0, int mau = 1);

    PhanSo operator+(const PhanSo& other);
    PhanSo operator-(const PhanSo& other);
    PhanSo operator*(const PhanSo& other);
    PhanSo operator/(const PhanSo& other);

    bool operator==(const PhanSo& other);
    bool operator>(const PhanSo& other);
    bool operator<(const PhanSo& other);

    friend istream& operator>>(istream& in, PhanSo& ps);
    friend ostream& operator<<(ostream& out, const PhanSo& ps);
};


#endif // PHANSO_H
