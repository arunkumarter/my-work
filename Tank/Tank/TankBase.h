#pragma once
#include <iostream>
using namespace std;
class TankBase {

public:
	virtual void Move() = 0;
	virtual void Attack() = 0;
	virtual void Defend() = 0;
};


class AggressiveTank : public TankBase {
public:
	void Move() {
		cout << "Move Towards";
	}
	void Attack() {
		cout << "Fire";
	}
	void Defend() {
		cout << "Cover Fire";
	}
};

class DefensiveTank : public TankBase {
public:
	void Move() {
		cout << "Move Away";
	}
	void Attack() {
		cout << "Wait No Fire";
	}
	void Defend() {
		cout << "Hide";
	}
};

class GurillaTank : public TankBase {
public:
	void Move() {
		cout << "Haffazard Move";
	}
	void Attack() {
		cout << "Fire & Move";
	}
	void Defend() {
		cout << "Duck";
	}
};