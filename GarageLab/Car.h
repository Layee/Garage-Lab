#pragma once
#pragma once
#include<string>
using namespace std;



class Car
{


private:
	string plate;  // car plate
	int counter;   // numbers of time the car changed lanes
	char carStatus;		// arrive or departure

public:

	string getPplate() { return plate; }
	int getCounter() { return counter; }
	char getCarStatus() { return carStatus; }
	Car();

	void setPlate(const string newPlate);
	void setCarStatus(const char newStatus);
	void setTurn();
	~Car();
};

#include "Car.cpp"

