#ifndef SECOND_H
#define SECOND_H

class First;
class Second {
private:
	int y;
public:
	Second();
	~Second();
	void Print(First);
};
#endif

