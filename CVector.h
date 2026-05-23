#ifndef CVECTOR_H
#define CVECTOR_H

#include <iostream>
#include <vector>

using namespace std;

class CVector {
private:
    int SoChieu;
    vector<double> ToaDo;

public:
    CVector(int SoChieu = 0);

    void Nhap();
    void Xuat();

    double DoDai();

    CVector operator+(const CVector& other);
    CVector operator-(const CVector& other);

    double operator*(const CVector& other);
};

#endif
