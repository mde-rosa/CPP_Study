int main(void)
{
	float   a = 420.042f;                     // reference value

	void *  b = &a;                          // implicit promotion -> ok
	int *   c = reinterpret_cast<int *>(b);   // explicit demotion -> ok
	// there will be no semantics checks, as the compiler will trust you
	// they will reinterpret any address as the specified other type
	int &   d = reinterpret_cast<int &>(b);   // explicit demotion -> ok

	return 0;
}
