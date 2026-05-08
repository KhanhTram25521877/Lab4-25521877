#ifndef SOPHUC_H
#define SOPHUC_H

#include <iostream>
using namespace std;

class SoPhuc {
private:
    double thuc;
    double ao;

public:
    SoPhuc(double thuc = 0, double ao = 0);

    SoPhuc operator+(const SoPhuc& other);
    SoPhuc operator-(const SoPhuc& other);
    SoPhuc operator*(const SoPhuc& other);
    SoPhuc operator/(const SoPhuc& other);

    bool operator==(const SoPhuc& other);
    bool operator!=(const SoPhuc& other);

    friend istream& operator>>(istream& in, SoPhuc& sp);
    friend ostream& operator<<(ostream& out, const SoPhuc& sp);
};

#endif

