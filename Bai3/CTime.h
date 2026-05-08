#ifndef CTIME_H
#define CTIME_H

#include <iostream>
using namespace std;

class CTime {
private:
    int gio;
    int phut;
    int giay;

    void chuanHoa();

public:
    CTime(int gio = 0, int phut = 0, int giay = 0);

    CTime operator+(int x);
    CTime operator-(int x);

    CTime& operator++();
    CTime& operator--();

    friend istream& operator>>(istream& in, CTime& t);
    friend ostream& operator<<(ostream& out, const CTime& t);
};

#endif
