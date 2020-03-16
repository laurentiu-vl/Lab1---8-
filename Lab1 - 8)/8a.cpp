// Print pow(a,b). I choose a and b.
#include <iostream>
#include <assert.h>
using namespace std;

int putere(int x, int n) {
	int i;
	int produs = 1;
	for (i = 0; i < n; i++)
	{
		produs = produs * x;
	}
	return produs;
}