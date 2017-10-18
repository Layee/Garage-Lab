#pragma once
#include"Car.h"
#include"ArrayStack.h"
#include<string>


class Garage
{

private:
	ArrayStack<Car> laneOne;
	ArrayStack<Car> laneTwo;
	ArrayStack<Car> street;


public:
	bool checkLaneOne();
	bool  checkLaneTwo();
	void removeCar(const Car& depart);
	void toLaneOne(const Car& newCar);
	void toLaneTwo(const Car& newCar);
	void toStreet(const Car& newCar);

	//search car method  
	~Garage();
};

#include"Garage.cpp"





