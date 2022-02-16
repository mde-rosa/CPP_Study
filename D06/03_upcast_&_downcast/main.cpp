#include <iostream>

class Parent                {};
class Child1: public Parent {}; // Parent class is a more generic type
class Child2: public Parent {}; // Child1 & Child2 are more specific classes


int main(void)
{
	Child1 a;                   // reference value

	Parent * b = &a;            // implicit reinterpretation cast
	Parent * c = (Parent *) &a; // explicit reinterpretation cast

	Parent * d = &a;            // implicit upcast   -> ok
	Child1 * e = d;             // implicit downcast -> no!
	Child2 * f = (Child2 *) d;  // explicit downcast -> ok but really?

    return 0;
}
