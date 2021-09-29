#pragma once
#include "finance-info.h"
#include "tax-calculator.h"

class TaxDiscountCalculator : public TaxCalculator {
public:
	TaxCalculator* taxCalc;
	void setTaxCalculator(TaxCalculator* taxCalc)
	{
		this->taxCalc = taxCalc;
	}
	virtual int calculateTax(FinancialInfo info) = 0;
};


class GeographyDiscountCalculator : public TaxDiscountCalculator {
public:
	int calculateTax(FinancialInfo info) {

		return this->taxCalc->calculateTax(info) * 0.1;

	}
};

class AgeDiscountCalculator : public TaxDiscountCalculator {
public:
	int calculateTax(FinancialInfo info) {

		return this->taxCalc->calculateTax(info) * 0.1;

	}
};