/*6.a. Lesen Sie eine Sequenz von natürlichen Zahlen (Sequenz mit 0 beendet) und bestimmen
Sie die Anzahl von 0 Ziffern des Produkts der gelesenen Zahlen.*/

#include <iostream>
#include "lab1_6a.h"
using namespace std;

int main()
{
    unsigned int prod = 1;
    unsigned int nr;
    cin >> nr;
    while (nr != 0)
    {
        prod = prod * nr;
        cin >> nr;
    }
    cout << "Numarul de 0-uri ale produsului este : " << zerouri(prod);
    return (0);
}