#include "House.h"


House::House(const double electiricity_a, const double natural_gas_a, const double fueloil_a, 
	const double coal_a, const double lpg_a, const double propan_a)
{
	setElectiricity(electiricity_a);
	setNaturalGas(natural_gas_a);
	setFueloil(fueloil_a);
	setCoal(coal_a);
	setLpg(lpg_a);
	setPropan(propan_a);
}

void House::setElectiricity(double electiricity_a)
{
	if (electiricity_a < 0) {
		throw invalid_argument("Invalid Entry, must be >= 0");
	}
	electricity = electiricity_a;
}

double House::getElectiricity() const
{
	return electricity;
}

void House::setNaturalGas(double natural_gas_a)
{
	if (natural_gas_a < 0) {
		throw invalid_argument("Invalid Entry, must be >= 0");
	}
	natural_gas = natural_gas_a;
}

double House::getNaturalGas() const
{
	return natural_gas;
}

void House::setFueloil(double fueloil_a)
{
	if (fueloil_a < 0) {
		throw invalid_argument("Invalid Entry, must be >= 0");
	}
	fueloil = fueloil_a;
}

double House::getFueloil() const
{
	return fueloil;
}

void House::setCoal(double coal_a)
{
	if (coal_a < 0) {
		throw invalid_argument("Invalid Entry, must be >= 0");
	}
	coal = coal_a;
}

double House::getCoal() const
{
	return coal;
}

void House::setLpg(double lpg_a)
{
	if (lpg_a < 0) {
		throw invalid_argument("Invalid Entry, must be >= 0");
	}
	lpg = lpg_a;
}

double House::getLpg() const
{
	return lpg;
}

void House::setPropan(double propan_a)
{
	if (propan_a < 0) {
		throw invalid_argument("Invalid Entry, must be >= 0");
	}
	propan = propan_a;
}

double House::getPropan() const
{
	return propan;
}

double House::getCarbonFootprint() const
{

	return getElectiricity()*2+getNaturalGas()*2+
		   getFueloil()*2+getCoal()*2+
		   getLpg()*2+getPropan()*2;
}
