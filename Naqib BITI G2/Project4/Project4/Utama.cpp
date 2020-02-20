#include <iostream>
#include "Second.h"
#include "First.h"
using namespace std;

void main() {
	Second nd;
	First fs;
	cout << "Y value from class Second : ";
	nd.Print(fs);
	fs.setX(4);
	cout << "\nX value from class First : ";
	fs.printData();
	cout << "\nY value from class Second : ";
	nd.Print(fs);
	system("pause");
}