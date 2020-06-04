#pragma once
#include <iostream>
#include <stdexcept>
#include <sstream>

using namespace std;

class CarbonFootprint
{
public:
	CarbonFootprint();
	virtual ~CarbonFootprint() = default;

	virtual double getCarbonFootprint() const = 0;

};
