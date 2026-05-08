#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc a, b;
    cout << "Nhap so phuc\n";
    cout << "So phuc thu nhat: ";
    cin >> a;
    cout << "So phuc thu hai: ";
    cin >> b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    if (a == b) cout << "a == b\n";
    else cout << "a != b\n";

    SoPhuc c = 5;
    cout << "c = " << c << endl;

    return 0;
}
