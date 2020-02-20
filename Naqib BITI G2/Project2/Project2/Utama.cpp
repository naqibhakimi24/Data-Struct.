#include <iostream>
#include "MyClass.h"
using namespace std;

void main()
{
	MyClass k[3];
	MyClass p[3] = { 20,30,40 };
	int i;
	for (i = 0; i < 3; i++) {
		cout << "k[" << i << "] = " << k[i]. getx() << "\t\t";
		cout << "p[" << i << "] = " << p[i]. getx() << endl;
	}
	system("pause");
}