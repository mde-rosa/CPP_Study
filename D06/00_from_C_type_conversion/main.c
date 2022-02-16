int main(void)
{
	int a = 42;             //reference value

	double b = a;           // implicit conversion cast
	double c = (double)a;   // explicit conversion cast

	double d = a;           // implicit promotion -> okay (no problem to move to a more generic type)
	int e = d;              // implicit demotion  -> hazardaus!
	int f = (int)d;         // explicit demotion  -> okay

    return 0;
}