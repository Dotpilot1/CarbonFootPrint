#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>

#include "CarbonFootprint.h"
#include "House.h"
#include "Car.h"

using namespace std;

void virtualViaPointer(const CarbonFootprint* const);
void virtualViaReference(const CarbonFootprint&);

int main() {

	House myHouse{ 10,10,10,10,10,10 };
	Car myCar{ 10,10 };

	cout<<"Calling Function by Using Static-Binding"
	 <<endl<<"myHouse Carbon FootPrint:"<<endl <<
	myHouse.getCarbonFootprint()
	 << endl <<"myCar Carbon FootPrint:" << endl <<
	myCar.getCarbonFootprint()<<endl;

	vector <CarbonFootprint*>carbonFootPrints{
		&myHouse,
		&myCar
	};

	cout << "Calling Functions Polymorphically via Dynamic Binding" << endl;

	cout << "Abstract-Class Pointer" << endl;

	for (const CarbonFootprint* abstractClassptr : carbonFootPrints) {
		virtualViaPointer(abstractClassptr);
	}

	cout <<endl << "Abstract-Class Reference" << endl;

	for (const CarbonFootprint* abstractClassRef : carbonFootPrints) {
		virtualViaReference(*abstractClassRef);
	}

	vector<CarbonFootprint*>carbonFootPrint{
		new House(5,5,5,5,5,5),
		new Car(5,5)
	};

	for (CarbonFootprint* carbonfootprintPtr : carbonFootPrint) {
		cout << carbonfootprintPtr->getCarbonFootprint() << endl;

		Car* carPtr =
			dynamic_cast<Car*>(carbonfootprintPtr);

		if (carPtr != nullptr) {
			double oldproductivity_coefficient = carPtr->getProductivityCoefficient();
			cout << "OLD:" << oldproductivity_coefficient << endl;
			carPtr->setProductivityCoefficient(10);
			cout << "NEW:" << carPtr->getProductivityCoefficient() << endl;
		}

		cout << "Carbon Footprint:" << carbonfootprintPtr->getCarbonFootprint() << endl;
	}

	for (const CarbonFootprint* carbonfootprintPtr : carbonFootPrint) {
		cout << "Deleting:"
			<< typeid(*carbonfootprintPtr).name() << endl;

		delete carbonfootprintPtr;
	}

	return 0;
}

void virtualViaPointer(const CarbonFootprint* const abstractClassPtr) {
	cout << abstractClassPtr->getCarbonFootprint()<<endl;

}

void virtualViaReference(const CarbonFootprint& abstractClassRef) {
	cout << abstractClassRef.getCarbonFootprint()<<endl;
}