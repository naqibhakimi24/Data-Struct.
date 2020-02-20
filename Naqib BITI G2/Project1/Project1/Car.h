#pragma once

#ifndef CAR_H
#define CAR_H

class Car
{
	private:
		int numOfTyre;

	public:
		Car(int tyre);
		~Car ();

		void stop();
};
#endif