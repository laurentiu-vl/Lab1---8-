#include <iostream>
#include "lab1_6a.h"
using namespace std;

// Calculam numarul aparitilor a cifrei 0 dintr-un numar

int zerouri(int numar)
{
    int cif;
    int zero = 0;
    while (numar != 0)
    {
        cif = numar % 10;
        if (cif == 0)
            zero++;
        numar = numar / 10;
    }
    return (zero);
}