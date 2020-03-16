//2b) Print the greatest seq like this: one number > 0 and the folowing one < 0. I choose the numbers from vector in Main.
#include <iostream>
#include <assert.h>
#include "8b.h"
using namespace std;

int main()
{
	int v[100] = { 3,-4, 10, 11,-1,23, -11, 30, -31 };  //the vector with numbers
	seq(v, 9);
}