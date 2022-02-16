#include <iostream>
#include <typeinfo> // This header defines types used related to operators typeid and dynamic_cast.
#include <exception>

class Parent                {public: virtual ~Parent(void) {} };
class Child1: public Parent {};
class Child2: public Parent {};



int main(void)
{
	Child1      a;        // reference value
	Parent *    b = &a;   // implicit upcast -> ok

    // explicit downcast -> Suspens...
    Child1 *    c = dynamic_cast<Child1 *>(b);
    if (c = NULL) {
    	std::cout << "Conversion is NOT okay" << std::endl;
    }
    else {
	    std::cout << "Conversion is okay" << std::endl;
    }


    // explicit downcast  -> Suspens...
    try {
	    Child2 & d = dynamic_cast<Child2 &>(*b); // convert to a reference
	    // it will fail because it casts to another
	    // the reference can't be NULL by definition, so it needs another way
	    // to handle the cast failure
        std::cout << "Conversion is okay" << std::endl;
    }
    catch (std::bad_cast &bc){
	    std::cout << "Conversion is NOT okay: " << bc.what() << std::endl;
	    return 0;
    }

    
    return 0;
}
