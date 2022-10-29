#include <vector>
#include "person.h"

void Person::Dinner(std::vector<string> *friends)
{
    string str = "";
    for (auto i = 0; i < friends->size(); i++)
    {
        str += friends->at(i) + ",";
    }

    cout << "have dinner with:" + str << endl;
};

bool Person::eat(int *food)
{
    printf("food is %d", *food);

    return true;
};

bool Person::IsStudent()
{
    return false;
};