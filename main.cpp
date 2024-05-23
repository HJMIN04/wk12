#include <iostream>
#include "ani.h"
#include "hum.h"
#include "bird.h"
#include "fish.h"
using namespace std;
int main() {
	animal a;
	human b;
	bird c;
	fish d;
	a.eat();
	b.eat();
	c.eat();
	b.walk();
	c.fly();
	d.swim();
	cout << " b " << b.nLegs << "\n";
	cout << " c " << d.nFins << "\n";
	return 123;
}