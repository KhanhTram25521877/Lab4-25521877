#include "SoPhuc.h"
using namespace std;

SoPhuc::SoPhuc(double thuc, double ao) {
    this->thuc = thuc;
    this->ao = ao;
}

SoPhuc SoPhuc::operator+(const SoPhuc& other) {
    return SoPhuc(thuc + other.thuc, ao + other.ao);
}

SoPhuc SoPhuc::operator-(const SoPhuc& other) {
    return SoPhuc(thuc - other.thuc, ao - other.ao);
}

SoPhuc SoPhuc::operator*(const SoPhuc& other) {
    return SoPhuc(
        thuc * other.thuc - ao * other.ao,
        thuc * other.ao + ao * other.thuc
    );
}

SoPhuc SoPhuc::operator/(const SoPhuc& other) {
    double mau = other.thuc * other.thuc + other.ao * other.ao;
    return SoPhuc(
        (thuc * other.thuc + ao * other.ao) / mau,
        (ao * other.thuc - thuc * other.ao) / mau
    );
}

bool SoPhuc::operator==(const SoPhuc& other) {
    return thuc == other.thuc && ao == other.ao;
}

bool SoPhuc::operator!=(const SoPhuc& other) {
    return !(*this == other);
}

istream& operator>>(istream& in, SoPhuc& sp) {
    in >> sp.thuc >> sp.ao;
    return in;
}

ostream& operator<<(ostream& out, const SoPhuc& sp) {
    out << sp.thuc;
    if (sp.ao >= 0) out << "+";
    out << sp.ao << "i";
    return out;
}
