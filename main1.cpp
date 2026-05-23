#include "DaThuc.h"

int main() {
    DaThuc p1, p2;

    cout << "Nhap da thuc thu 1\n";
    p1.Nhap();

    cout << "\nNhap da thuc thu 2\n";
    p2.Nhap();

    cout << "\nP1(x) = ";
    p1.Xuat();

    cout << "\nP2(x) = ";
    p2.Xuat();

    DaThuc tong = p1 + p2;
    DaThuc hieu = p1 - p2;
    DaThuc tich = p1 * p2;

    cout << "\n\nTong: ";
    tong.Xuat();

    cout << "\nHieu: ";
    hieu.Xuat();

    cout << "\nTich: ";
    tich.Xuat();

    double x;

    cout << "\n\nNhap x: ";
    cin >> x;

    cout << "P1(" << x << ") = "
         << p1.TinhGiaTri(x);

    return 0;
}
