#pragma once
#include <stdexcept>
#include <iostream>
#include "CarbonFootprint.h"

using namespace std;

class Car : public CarbonFootprint {
public:
	Car(const double = 0.0,const double=0.0);
	virtual ~Car() = default;

	void setYearlyDrivenDistance(double);
	double getYearlyDrivenDistance()const;

	void setProductivityCoefficient(double);
	double getProductivityCoefficient()const;

	virtual double getCarbonFootprint() const override;

private:
	double yearly_driven_distance;
	double productivity_coefficient;

};