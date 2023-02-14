#include "Car.h"



 Car::Car(size_t speed) : _speed(speed), _model(new int[_speed]) {}//конструктор

Car::~Car() {//деструктор
	if (_model) {
		delete[] _model;
		_model = nullptr;
	}
}
size_t Car::getSpeed() {
	return _speed;
}
void Car::setSpeed(size_t speed) {
	_speed = speed;
}
Car::Car(const Car& other) :_speed(other._speed), _model(new int[_speed]) {//конструктор копирования
	for (size_t i = 0; i < _speed; i++) {
		_model[i] = other._model[i];
	}
}

Car& Car::operator=(Car&& other)noexcept {//оператор присваивания перемещением
  if (this != &other){
	std::swap(_speed, other._speed);
	std::swap(_model, other._model);
	return *this;
 }
}

//Car& Car::operator=(const Car& other) {//оператор присваивания и копирования
//	Car tmp(other);
//	if (this != &other){
//	std::swap(_speed, tmp._speed);
//	std::swap(_model, tmp._model);
//	return *this;
//	}
//}