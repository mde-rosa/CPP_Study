#include <iostream>

Class A {};
Class B {};

Class C {

public:

                C(A const & _)  {return ;}
    explicit    C(B const & _)  {return ;} // will prevent implicit conversion of your instance class
};

void    f(C const & _ )
{
	return ;
}

int main(void)
{
	f(A()); // implicit conversion okay
	f(B()); // implicit conversion not okay, constructor is explicit
}
