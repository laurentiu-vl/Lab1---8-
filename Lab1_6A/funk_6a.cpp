#include <iostream>
#include "lab1_6a.h"
using namespace std;

int zerouri(int prod)
{
    int nr;
    int zero = 0;
    while (prod != 0)
    {
        nr = prod % 10;
        if (nr == 0)
            zero++;
        prod = prod / 10;
    }
    return (zero);
}