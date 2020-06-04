#pragma once
#include <stdexcept>
#include <iostream>
#include "CarbonFootprint.h"

using namespace std;

class House : public CarbonFootprint {
public:
	House(const double = 0.0, const double = 0.0, const double = 0.0,
		const double = 0.0, const double = 0.0, const double = 0.0);
	virtual ~House() = default;

	void setElectiricity(double);
	double getElectiricity() const;

	void setNaturalGas(double);
	double getNaturalGas() const;

	void setFueloil(double);
	double getFueloil() const;

	void setCoal(double);
	double getCoal() const;

	void setLpg(double);
	double getLpg() const;

	void setPropan(double);
	double getPropan() const;

	virtual double getCarbonFootprint() const override;
	
private:
	double electricity;
	double natural_gas;
	double fueloil;
	double coal;
	double lpg;
	double propan;
};
