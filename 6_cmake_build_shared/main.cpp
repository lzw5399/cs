#include "swap3.h"

int main(int args, char **argv)
{
    swap3 my_swap(10, 20);

    my_swap.printInfo();
    my_swap.run();
    my_swap.printInfo();

    return 0;
}