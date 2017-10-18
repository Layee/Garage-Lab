#include "Garage.h"

//check lane one to see if it is empty

bool Garage::checkLaneOne() {
	if (!laneOne.isEmpty()) {
		return true;
	}
	else {
		return false;
	}
}


// Check Lane Two see if it is empty


bool Garage::checkLaneTwo() {
	if (!laneTwo.isEmpty()) {
		return true;
	}

	else {
		return false;
	}
}


//push to lane one

void Garage::toLaneOne(const Car& newCar) {
	laneOne.push(newCar);

}




//push car into lane two

void Garage::toLaneTwo(const Car& newCar) {
	laneTwo.push(newCar);
}