#include <iostream>
#include "Vertex.class.tpp"

int main(void)
{
	Vertex< int >   v1(12, 23, 34);
	Vertex<>        v2(12, 23, 34); // 12, 23, 34 will be implicitly converted to floats

	std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;

    return 0;
}
