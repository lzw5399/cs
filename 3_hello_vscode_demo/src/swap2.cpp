#include "swap2.h"

void swap2::run()
{
    int temp;
    temp = _a;
    _a = _b;
    _b = temp;
}

void swap2::printInfo()
{
    cout << "_a=" << _a << endl;
    cout << "_b=" << _b << endl;
}