
int main(void)
{
	int         a = 42;                   // reference value

	int const * b = &a;                   // implicit promotion -> ok
	    // moving from a mutable value to a const is not a problem
	int *       c = b;                    // explicit demotion -> no!
	int *       d = const_cast<int *>(b); // explicit demotion -> ok

    return 0;
}
