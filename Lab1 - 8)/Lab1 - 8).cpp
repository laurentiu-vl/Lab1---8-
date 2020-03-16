#include <iostream>
#include <assert.h>
#include "8a.h"
using namespace std;

int main()
{
	int x, n;
	assert(25 == putere(5, 2));  //assert
	assert(49 == putere(7, 2));
	assert(100 == putere(10, 2));

	cout << "Number:" << " ";
	cin >> x;
	cout << "Power:" << " ";
	cin >> n;
	cout << "The result is" << " " << putere(x, n);
	return 0;
}