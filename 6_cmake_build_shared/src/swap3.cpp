#include "swap3.h"

void swap3::run()
{
    int temp;
    temp = _a;
    _a = _b;
    _b = temp;
}

void swap3::printInfo()
{
    cout << "_a=" << _a << endl;
    cout << "_b=" << _b << endl;
}