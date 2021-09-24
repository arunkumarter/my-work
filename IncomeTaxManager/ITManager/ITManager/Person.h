#pragma once
#include <string>
#include "FinanceData.h"
using namespace std;
enum Gender { male = 0, female=1 };

class Person
{
public:
	string name;
	Gender gender;
	FinanceData* financeData;

	Person(string name, Gender gender, FinanceData* finance) {
		this->name = name;
		this->gender = gender;
		this->financeData = finance;
	}
};

