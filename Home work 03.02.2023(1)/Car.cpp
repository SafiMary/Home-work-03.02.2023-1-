#include "Car.h"



 Car::Car(size_t speed) : _speed(speed), _model(new int[_speed]) {}//�����������

Car::~Car() {//����������
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
Car::Car(const Car& other) :_speed(other._speed), _model(new int[_speed]) {//����������� �����������
	for (size_t i = 0; i < _speed; i++) {
		_model[i] = other._model[i];
	}
}

Car& Car::operator=(Car&& other)noexcept {//�������� ������������ ������������
  if (this != &other){
	std::swap(_speed, other._speed);
	std::swap(_model, other._model);
	return *this;
 }
}

//Car& Car::operator=(const Car& other) {//�������� ������������ � �����������
//	Car tmp(other);
//	if (this != &other){
//	std::swap(_speed, tmp._speed);
//	std::swap(_model, tmp._model);
//	return *this;
//	}
//}