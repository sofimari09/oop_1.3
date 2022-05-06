#pragma once
#include <string>

using namespace std;

class Rational
{
private:
	int a, b;
public:
	void Init(int a, int b);
	void Read();
	void Display();

	double getA();
	double getB();
	void setA(int value);
	void setB(int value);

	string toString() const;

	double value();
	double div(Rational& l, Rational& r);
	bool equal(Rational& l, Rational& r);
	bool great(Rational& l, Rational& r);
	bool less(Rational& l, Rational& r);

};

