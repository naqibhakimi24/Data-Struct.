#ifndef FIRST_H
#define FIRST_H
class First
{
	friend class Second;

private:
	int x;
public:
	First();
	~First();
	void setX(int);
	void printData();
};
#endif
