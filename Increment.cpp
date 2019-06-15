#include <iostream>
#include "Increment.h"

// Define prefix increment operator.
Number& Number::operator++()
{
	++x;
	return *this;
}

// Define postfix increment operator.
Number Number::operator++(int)
{
	// Number temp = *this;
	Number temp(x);
	++(*this);
	return temp;
}

void Number::Display()
{
	cout << "x=" << x << endl;
}
