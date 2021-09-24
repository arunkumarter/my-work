#pragma once
class FinanceData
{
public:
	int income;
	int expense;
	int investment;

public:
	FinanceData(int income, int expense, int investment) {
		this->income = income;
		this->expense = expense;
		this->investment = investment;
	}
};

