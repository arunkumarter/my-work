#pragma once
#include "TaxSlab.h"
class TaxSlab2021 : public TaxSlab
{
	public:
		int getTaxableAmount(Person* p);
};