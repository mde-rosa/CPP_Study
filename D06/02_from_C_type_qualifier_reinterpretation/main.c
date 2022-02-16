
int main(void)
{
	int a = 42;                         // reference value

	int const * b = &a;                 // implicit type qualifier cast
	int const * c = (int const *) &a;   // explicit type qualifier cast

	int const * d = &a;                 // implicit promotion -> okay
	int * e = d;                        // implicit demotion -> KO compiler will give error
	int * f = (int *) d;                // explicit demotion -> okay

    return 0;
}

