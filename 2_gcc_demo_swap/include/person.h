#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

typedef int CustomInt;

// typedef struct PersonInfo
// {
//     CustomInt id;
//     string name;
// };

class Person
{
public:
    void Dinner(std::vector<string> *friends);

protected:
    bool IsStudent();

private:
    bool eat(int *food);
};

#endif // CIRCLE_H
