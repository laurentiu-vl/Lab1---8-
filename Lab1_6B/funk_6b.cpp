#include <iostream>
#include "lab1_6b.h"
using namespace std;

int prim(int n)
{
    int m, i;
    if (n <= 1)
        return (0);
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
            return (0);
    }
    return (1);
}

int funk(int v[])
{
    int suma = 0;
    int max = 0;
    int max_temp = 0;
    int i = 0;
    while (v[i])
    {
        if (int(v[i + 1]) == v[i + 1])
        {
            suma = v[i] + v[i + 1];
            if (prim(suma))
            {
                max_temp++;
                if (max_temp > max)
                    max = max_temp;
            }
            else
                max_temp = 0;
            i++;
        }
    }
    return max;
}