#include <iostream>
#include <vector>
#include <stdio.h>
#include <windows.h>
#include <utility>
#include "Car.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Car car1(40);
	Car car2(67);
	Car car3(50);
	
	std::cout << car1.getSpeed() << std::endl;//40
	car1 = Car(30);// �������� �������� �� 30
	std::cout << car1.getSpeed() << std::endl;//30
	car2 = std::move(car3);//67   ����������� �� car2 �������� � �������� �� �������� car1
	//std::cout << car3.getSpeed() << std::endl;//car3 ���� ������� car2, ���� ������ ��� ��� car3 ��� ���������
}
