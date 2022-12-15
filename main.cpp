#include <iostream>

using namespace std;

class Calculator
{
public:
	virtual void Calculate(double a, double b) = 0;
};

class Plus :public Calculator
{
public:
	void Calculate(double a, double b) override
	{
		cout << "Operation " << a << " plus " << b << " >> " << a + b << endl;
	}
};

class Minus :public Calculator
{
public:
	void Calculate(double a, double b) override
	{
		cout << "Operation " << a << " minus " << b << " >> " << a - b << endl;
	}
};

class Multiplied :public Calculator
{
public:
	void Calculate(double a, double b) override
	{
		cout << "Operation " << a << " multiplied by " << b << " >> " << a * b << endl;
	}
};

class Divided :public Calculator
{
public:
	void Calculate(double a, double b) override
	{
		cout << "Operation " << a << " devided by " << b << " >> " << a / b << endl;
	}
};

/*
class Calculate
{
public:
	void Calculate(Calculator *operation)
	{
		operation->Calculate(double a, double b);
	}
};
*/

int main()
{
	Plus plus;
	Minus minus;
	Multiplied mult;
	Divided div;

	double a;
	double b;

	cout << "Is a calculator program for simple arithmetic operations on two numbers a and b" << endl << endl;
	cout << "Enter number a >> ";
	cin >> a;
	cout << "Enter number b >> ";
	cin >> b;
	cout << endl;

	plus.Calculate(a, b);
	minus.Calculate(a, b);
	mult.Calculate(a, b);
	div.Calculate(a, b);

	return 0;
}
