#include <iostream>

class Complex
{
private:
	double re = 0.0;
	double im = 0.0;
public:
	Complex(double r, double i)
		: re(r)
		, im(i)
	{}
	Complex(double r)
		: re(r)
	{}
};

int main()
{
	return 0;
}