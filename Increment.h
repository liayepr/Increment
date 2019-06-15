#pragma once
#include <iostream>
using namespace std;

class Number
{
public:
	Number& operator++();       // Prefix increment operator.
	Number operator++(int);     // Postfix increment operator.
	void Display();
	Number(int x_ = 0) : x(x_) { } // // Define default constructor.

private:
	int x;
};