#include <stdio.h>

int main(void)
{
	float 	a = 420.042f; 	// reference value

	void * 	b = &a; 		// implicit reinterpretation cast
	void * 	c =  (void *) &a;// explicit reinterpretation cast

	void * 	d = &a; 		// implicit promotion -> okay (no problem to move to a more generic type)
	int * 	e = d; 			// implicit demotion  -> hazardaus!
	int * 	f = (int *) d; 	// explicit demotion  -> okay
	
	printf("%p, %f\n", &a, a);	

	printf("%p\n", b);
	printf("%p\n", c);

	printf("%p\n", d);
	printf("%p, %d\n", e, *e);
	printf("%p, %d\n", f, *f);
}