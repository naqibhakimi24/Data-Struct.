#include <iostream>
#include "Car.h"
using namespace std;

Car::Car(int tyre)
{
	numOfTyre = tyre;
}

Car::~Car() {  }

void Car::stop()
{
	cout << "Please stop now! " << numOfTyre << " tyre" << endl;
}

