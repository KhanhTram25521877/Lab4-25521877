#include <iostream>
#include "PhanSo.h"

using namespace std;

int main() {
    PhanSo a, b;

    cout << "Nhap phan so\n";
    cin >> a >> b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    if (a == b)
        cout << "a == b\n";
    else
        cout << "a != b\n";

    if (a > b)
        cout << "a > b\n";
    else if (a < b)
        cout << "a < b\n";

    PhanSo c = 5;

    cout << "c = " << c << endl;

    return 0;
}
