#pragma once
#include "ani.h"
using namespace std;
class fish : public animal {
public:
	fish() : nFins(4) { };
	int nFins;
	void swim() { cout << "I can swim \n"; }

};
