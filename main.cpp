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
	
	Complex(const Complex&) = default;
	
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
	String() = default;
	
	String(size_t n, char c)
		: str(new char[n])
		, sz(n)
	{
		memset(str, c, n);	
	}
	
	String(String&) = default;
	
	// copy constructor
	String(const String& s)
		: str(new char[s.sz]), sz(s.sz)
	{
		memcpy(str, s.str, sz);	
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