#include <iostream>

class Parent                {}; // Parent is more generic
class Child1: public Parent {}; 
class Child2: public Parent {}; // Child1 & Child2 more accurate

class Unrelated             {}; // detached from the hierarchy of the inheritance tree



int main(void)
{
	Child1      a;                                       // reference value

	Parent *    b = &a;                                // implicit upcast -> ok
	Child1 *    c = b;                                 // implicit downcast -> no!
	Child2 *    d = static_cast<Child2 *>(b);          // explicit downcast -> ok

	Unrelated * e = static_cast<Unrelated *>(&a);   // explicit conversion -> no!
	
    // static_cast will make sure that the cast will happen within an inheritance tree
	
    return 0;
}
