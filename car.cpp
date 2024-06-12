#include<iostream>
#include<string>

class Car{
public:
	std::string brand;
	std::string modle;
	int distance;

	void drive(int km) {
		distance += km;
	}
	void showdata() {
		std::cout << "brand:" << brand << std::endl;
		std::cout << "model:" << model << std::endl;
		std::cout << "distance driven:" << distance << "km" << std::endl;
	}
};
int main() {
	Car mycar;
	myCar.brand = "iran khodro";
	mycar.model = "dena";
	mycar.distance = 100;
	mycar.showdata();

	return 0;
}