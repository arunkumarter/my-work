#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum Gender{Male,Female};

class FinancialInfo{
public:
    Gender gender;
    string pan;
    int year;
    int income;
    int expense;
    int investment;
};

class extFinancialInfo : public FinancialInfo{
public:
	string geography;
	int age;
};


class FinancialInfoSource 
{
    public:
    virtual FinancialInfo fetchData(string pan, int year)=0;
};


class FixedFinancialInfoSource:public FinancialInfoSource{
    int income,expense,investment;
    public:
     FixedFinancialInfoSource(int income=500000, int expense=200000, int investment=200000){
         this->income=income;
         this->expense=expense;
         this->investment=investment;
     }
     FinancialInfo fetchData(string pan, int year){
            FinancialInfo info;
            info.gender= pan[0]=='m'?Gender::Male:Gender::Female;
            info.income=income;
            info.expense=expense;
            info.investment=investment;
            info.pan=pan;
            info.year=year;
            return info;
        }
};


//class RandomFinancialInfoSource:public FinancialInfoSource
//{
//public:
//    FinancialInfo fetchData(string pan, int year)
//    {
//
//        FinancialInfo info;
//        info.gender= pan[0]=='m'?Gender::Male:Gender::Female;
//        info.pan=pan;
//        info.gender=gender;
//        info.year=year;
//
//        info.income= (rand()%400+100)*1000;
//        info.expense=(rand()%150)*1000;
//        info.investment=(rand()%150)*1000;
//
//        return info;
//
//    }
//};