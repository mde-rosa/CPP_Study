#include <iostream>

class Foo {

public:

	Foo(float const v) : _v(v) {}

	float getV(void)    {return this->_v;}

	operator float()    {return this->_v;}                  // cast operator
	operator int()      {return static_cast<int>(this->_v);} // cast operator

private:

    float _v;

};

int main(void)
{
	Foo     a(420.024f);
	float   b   = a;    // implicit cast from Foo to float
	int     c   = a;      // implicit cast from Foo to int

	std::cout << a.getV() << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}