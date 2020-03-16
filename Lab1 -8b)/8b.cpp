#include <iostream>
#include "8b.h"
using namespace std;

bool semn(int a, int b)
{
	if ((a > 0 && b > 0) || (a < 0 && b < 0))
	{
		return false;
	}
	return true;
}
void seq(int v[100], int n)
{
	cout << "The longest sequence is ";
	int x, y;
	int i = 0;
	int aux = 0;
	int contor = 1;
	int maxim = 1;
	int imin = 0;
	int imax = 0;
	while (i < n)
	{
		aux = i;
		x = v[i];
		y = v[i + 1];
		while (semn(x, y) == true && i < n - 1)
		{												//count if numbers are both negative or positive
			contor++;
			i++;
		}
		if (contor > maxim)
		{												//save the positions of the start and the end of the longest sequence
			imax = i;
			imin = aux;
			maxim = contor;
		}
		i++;
	}
	i = imin;
	while (i <= imax)
	{
		cout << v[i] << " ";				//print the numbers 
		i++;
	}
}