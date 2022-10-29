#pragma once // 防止头文件重复包含

#include <iostream>

using namespace std;

class swap2
{
private:
    int _a;
    int _b;

public:
    void run();
    void printInfo();

    // 构造函数
    swap2(int a, int b)
    {
        _a = a;
        _b = b;
    }
};
