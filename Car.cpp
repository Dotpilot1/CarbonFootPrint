#include "Car.h"

Car::Car(const double yearly_driven_distance_a, const double productivity_coefficient_a)
{
	setYearlyDrivenDistance(yearly_driven_distance_a);
	setProductivityCoefficient(productivity_coefficient_a);
}

void Car::setYearlyDrivenDistance(double yearly_driven_distance_a)
{
	if (yearly_driven_distance_a < 0) {
		throw invalid_argument("Invalid Entry, must be >= 0");
	}

	yearly_driven_distance = yearly_driven_distance_a;
}

double Car::getYearlyDrivenDistance() const
{
	return yearly_driven_distance;
}

void Car::setProductivityCoefficient(double productivity_coefficient_a)
{
	if (productivity_coefficient_a < 0) {
		throw invalid_argument("Invalid Entry, must be >= 0");
	}

	productivity_coefficient = productivity_coefficient_a;
}

double Car::getProductivityCoefficient() const
{
	return productivity_coefficient;
}

double Car::getCarbonFootprint() const
{
	return getYearlyDrivenDistance()* getProductivityCoefficient();
}
