#include <iostream>
#include "Second.h"
#include "First.h"
using namespace std;

Second::Second() {
	y = 2;
}

Second::~Second() {}

void Second::Print(First yc) {
	cout << "X is : " << y + yc.x << endl;
}