#include <iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass() {
	x = 0;
}
MyClass::MyClass(int n) {
	x = n;
}
int MyClass::getx() {
	return x;
}