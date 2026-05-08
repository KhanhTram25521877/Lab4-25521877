#include <iostream>
#include <iomanip>
#include "CDate.h"

using namespace std;

int main() {
    CDate ngayGui, ngayRut;

    double tienGui;
    double laiSuat;

    cout << "Nhap ngay gui (dd mm yyyy): ";
    cin >> ngayGui;

    cout << "Nhap ngay rut (dd mm yyyy): ";
    cin >> ngayRut;

    cout << "Nhap so tien gui: ";
    cin >> tienGui;

    cout << "Nhap lai suat (%/nam): ";
    cin >> laiSuat;

    cout << "\nNgay gui: " << ngayGui << endl;
    cout << "Ngay rut: " << ngayRut << endl;

    int soNgay = ngayRut - ngayGui;

    cout << "So ngay gui: " << soNgay << endl;

    double tienLai =
        tienGui * laiSuat / 100 * soNgay / 365;

    cout << fixed << setprecision(2);

    cout << "Tien lai: " << tienLai << endl;

    cout << "Tong tien: "
         << tienGui + tienLai << endl;

    return 0;
}
