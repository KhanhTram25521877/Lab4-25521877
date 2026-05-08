#ifndef CMATRIX_H
#define CMATRIX_H

#include <iostream>
#include <vector>

using namespace std;

class CMatrix {
private:
    int SoDong;
    int SoCot;

    vector<vector<double>> GiaTri;

public:
    CMatrix(int SoDong = 0, int SoCot = 0);

    void Nhap();
    void Xuat();

    CMatrix operator+(const CMatrix& other);
    CMatrix operator-(const CMatrix& other);

    CMatrix operator*(const CMatrix& other);

    vector<double> NhanVector(
        const vector<double>& v
    );
};

#endif
