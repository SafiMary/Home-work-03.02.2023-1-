#pragma once
#include <string>

class Car {
public:
	explicit Car(size_t speed = 0);
	~Car();
	size_t getSpeed();
	void setSpeed(size_t speed);
	Car(const Car& other);
	Car& operator=(Car&& other)noexcept;
	/*Car& operator=(const Car& other);*/
private:
	size_t _speed;
	int* _model;

};


