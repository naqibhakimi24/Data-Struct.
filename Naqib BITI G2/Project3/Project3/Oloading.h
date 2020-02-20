#ifndef OLOADING_H
#define OLOADING_H

class OLoading
{
private:
	double loan;
public:
	OLoading();
	OLoading(double);
	~OLoading();
	double Payment(int, double);
	double Payment(int, double, double);

};
#endif