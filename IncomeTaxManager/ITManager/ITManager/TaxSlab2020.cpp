#include "TaxSlab2020.h"

int TaxSlab2020::getTaxableAmount(Person* p) {
	if (p->gender == Gender::female) {
		p->financeData->income * 0.05;
	}
	else {
		p->financeData->income * 0.1;
	}
}
