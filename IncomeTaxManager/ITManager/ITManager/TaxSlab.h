#pragma once
#include "Person.h"

class TaxSlab
{
public:
	// pure virtual function providing interface framework.
	virtual int getTaxableAmount(Person* p) = 0;
};

