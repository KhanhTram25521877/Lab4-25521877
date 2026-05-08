#ifndef CDATE_H
#define CDATE_H

#include <iostream>
using namespace std;

class CDate {
private:
    int ngay;
    int thang;
    int nam;

    void ChuanHoa();

public:
    CDate(int ngay = 1, int thang = 1, int nam = 2000);

    bool KiemTraNamNhuan();
    int SoNgayTrongThang();

    CDate operator+(int x);
    CDate operator-(int x);

    int operator-(const CDate& other);

    CDate& operator++();
    CDate& operator--();

    friend istream& operator>>(istream& in, CDate& d);
    friend ostream& operator<<(ostream& out, const CDate& d);
};

#endif
