#ifndef DATHUC_H
#define DATHUC_H

#include <iostream>
#include <vector>

using namespace std;

class DaThuc {
private:
    int bac;
    vector<double> heSo;

public:
    DaThuc(int bac = 0);

    void Nhap();
    void Xuat();

    double TinhGiaTri(double x);

    DaThuc operator+(const DaThuc& other);
    DaThuc operator-(const DaThuc& other);
    DaThuc operator*(const DaThuc& other);
};

#endif
