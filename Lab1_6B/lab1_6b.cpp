/*Gegeben sei ein Vektor von Zahlen, finde die längste zusammenhängende Teilfolge so,
dass die Summe von zwei aufeinanderfolgenden Elementen eine Primzahl ist.*/

#include <iostream>
#include "lab1_6b.h"
using namespace std;

int main()
{
    int v[1024] = {};
    int i = 0;
    int nr;
    cin >> nr;
    while (nr)
    {
        v[i] = nr;
        i++;
        cin >> nr;
    }
    cout << "Cea mai lunga secventa specificate are lungimea: " << funk(v) + 1;
    return (0);
}