#pragma once
#include "TaxSlab.h"
class TaxSlab2020 : public TaxSlab
{
public:
	int getTaxableAmount(Person* p);
};

