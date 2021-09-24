#include "TaxSlab2021.h"

int TaxSlab2021::getTaxableAmount(Person* p) {
	return p->financeData->income * 0.2;
}
