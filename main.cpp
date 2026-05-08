#include "CVector.h"

int main() {
    CVector v1, v2;

    cout << "Nhap vector thu 1\n";
    v1.Nhap();

    cout << "\nNhap vector thu 2\n";
    v2.Nhap();

    cout << "\nV1 = ";
    v1.Xuat();

    cout << "\nV2 = ";
    v2.Xuat();

    CVector Tong = v1 + v2;
    CVector Hieu = v1 - v2;

    double TichVoHuong = v1 * v2;

    cout << "\n\nTong: ";
    Tong.Xuat();

    cout << "\nHieu: ";
    Hieu.Xuat();

    cout << "\nTich vo huong: "
         << TichVoHuong;

    cout << "\n\nDo dai V1: "
         << v1.DoDai();

    return 0;
}
