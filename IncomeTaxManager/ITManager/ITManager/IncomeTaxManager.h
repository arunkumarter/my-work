#pragma once
#include "Directory.h"
#include "TaxSlab.h"
#include "Person.h"
#include <algorithm>
#include <list>
#include <iterator>
#include <iostream>
using namespace std;

class IncomeTaxManager
{
public:
	void calculateTax(Directory* d, TaxSlab* taxSlab);
		
};

