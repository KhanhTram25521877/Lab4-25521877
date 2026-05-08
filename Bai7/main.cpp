#include "CMatrix.h"

int main() {
    CMatrix A, B;

    cout << "Nhap ma tran A\n";
    A.Nhap();

    cout << "\nNhap ma tran B\n";
    B.Nhap();

    cout << "\nMa tran A:\n";
    A.Xuat();

    cout << "\nMa tran B:\n";
    B.Xuat();

    CMatrix Tong = A + B;
    CMatrix Hieu = A - B;
    CMatrix Tich = A * B;

    cout << "\nTong:\n";
    Tong.Xuat();

    cout << "\nHieu:\n";
    Hieu.Xuat();

    cout << "\nTich A * B:\n";
    Tich.Xuat();

    int n;

    cout << "\nNhap kich thuoc vector: ";
    cin >> n;

    vector<double> v(n);

    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    vector<double> KetQua =
        A.NhanVector(v);

    cout << "\nA * Vector = ";

    for (double x : KetQua) {
        cout << x << " ";
    }

    return 0;
}
