#include <iostream>
#include <iomanip>

Template<typename T = float>

class Vertex {
public:
	Vertex (T const & x, T const & y, T const & z): _x(x), _y(y), _z(z) {}
	~Vertex(void){}

	T const & getx(void) const {return this->_x};
    T const & gety(void) const {return this->_y};
    T const & getz(void) const {return this->_z};

    // etc...

private:
	T const _x;
    T const _y;
    T const _z;

    Vertex(void);
};

template< typename T >
std::ostream &  operator<<(std::ostream & o, Vertex< T > const & v) {

	std::cout.precision(1);
	o << setiosflag(std::ios::fixed);
	o << "Vertex( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << " )";
	return o;
}
