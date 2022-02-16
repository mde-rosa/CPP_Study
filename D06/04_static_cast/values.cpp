int main(void)
{
	int a 		= 42; 				 	// reference value

	double b 	= a; 				 	// implicit promotion -> ok
	int c 		= b;					// implicit demotion  -> no!
	int d 		= static_cast<int>(b);  // explicit demotion  -> ok

	return 0;

	//g++ -Wall -Werror -Wno-unused -Wconversion -Werror values.cpp
}
