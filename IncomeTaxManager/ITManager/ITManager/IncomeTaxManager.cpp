#include "IncomeTaxManager.h"
void IncomeTaxManager::calculateTax(Directory* d, TaxSlab* taxSlab) {
	list<Person*> my_list = d->personList;

	for (Person* p : my_list) {
		cout << "Tax for " << p->name << " is " << taxSlab->getTaxableAmount(p);
	}
}