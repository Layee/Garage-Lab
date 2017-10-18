#include "Car.h"



Car:: Car() 
{

	plate = "";
		counter = 0;
		carStatus;


}


//get the car plate

void Car::setPlate(const string newPlate) {

	plate = newPlate;
}


// count the number of times the car was moved
void Car::setTurn() {
	counter++;
}

void Car::setCarStatus(const char newStatus) {
	carStatus = newStatus;
}

Car::~Car()
{
}
