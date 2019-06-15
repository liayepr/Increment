#include <iostream>
#include "Increment.h"

using namespace std;

int main()
{
	Number obj(5);
	obj.Display();
	cout << "preIncrement" << endl;
	++obj;
	obj.Display();
	cout << "postIncrement" << endl;
	obj++;
	obj.Display();
	system("pause");

}