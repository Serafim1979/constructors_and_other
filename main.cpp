#include <cstring>
#include <iostream>

class Complex
{
private:
	double re = 0.0;
	double im = 0.0;
public:
	Complex()
	{
		std::cout << "Default constructor" << std::endl;
	}
	Complex(double r, double i)
		: re(r)
		, im(i)
	{}
	Complex(double r)
		: re(r)
	{}
};

class String
{
private:
	char* str = nullptr;
	size_t sz = 0;
	
public:	
	String(){}
	String(size_t n, char c)
		: str(new char[n])
		, sz(n)
	{
		memset(str, c, n);	
	}
	
	~String()
	{
		delete[] str;
	}
};

int main()
{
	return 0;
}