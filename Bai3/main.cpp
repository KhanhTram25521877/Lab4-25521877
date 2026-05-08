#include <iostream>
#include <windows.h>
#include "CTime.h"

using namespace std;

void gotoXY(int x, int y) {
    COORD coord;

    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE),
        coord
    );
}

int main() {
    CTime t;

    cout << "Nhap gio phut giay: ";
    cin >> t;

    int congGiay, truGiay;

    cout << "Nhap so giay can cong: ";
    cin >> congGiay;

    cout << "Nhap so giay can tru: ";
    cin >> truGiay;

    cout << "\nThoi gian ban dau: " << t << endl;

    cout << "Sau khi cong: " << t + congGiay << endl;

    cout << "Sau khi tru: " << t - truGiay << endl;

    ++t;
    cout << "Sau ++ : " << t << endl;

    --t;
    cout << "Sau -- : " << t << endl;

    cout << "\nDong ho dang chay...\n";

    while (true) {
        gotoXY(100, 0);

        cout << t;

        Sleep(1000);

        ++t;
    }

    return 0;
}
