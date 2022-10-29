#include <iostream>
#include <vector>

#include "person.h"

int main()
{
    auto person = new Person();
    person->Dinner(new std::vector<string>{"bob", "maria"});

    auto p2 = Person{};
    p2.Dinner(new std::vector<string>{"pony", "jack"});

    // double d = 0.0;
    // auto list = new std::vector<int>();

    return 0;
}