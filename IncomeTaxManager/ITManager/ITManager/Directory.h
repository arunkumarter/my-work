#pragma once
#include <list>
#include "Person.h"
#include "FinanceData.h"
using namespace std;
class Directory
{
public:
	list<Person*> personList;
public:
	void initialize() {
		FinanceData* fd = new FinanceData(1000,200,200);
		Person* p = new Person("King", Gender::male, fd);
		personList.push_back(p);

		FinanceData* fd1 = new FinanceData(2000, 200, 200);
		Person* p1 = new Person("Queen", Gender::female, fd);
		personList.push_back(p1);

	}
};

