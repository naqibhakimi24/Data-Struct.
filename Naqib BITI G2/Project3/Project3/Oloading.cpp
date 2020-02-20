#include <iostream>
#include "OLoading.h"
using namespace std;

OLoading::OLoading() {
	loan = 10000;
}

OLoading::OLoading(double l) {
	loan = l;
}

OLoading::~OLoading() {}

double OLoading::Payment(int month, double interest) {
	return (loan / month * interest);
}

double OLoading::Payment(int year, double interest, double deposit) {
	return (deposit - (loan / (12 * year)*interest));
}