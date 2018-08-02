//(Operator Overloads in Templates) Write a simple function template for predicate function isEqualTo that compares its two arguments of the same type with the equality operator ( == ) and returns true if they are equal and false otherwise. Use this function template in a program that calls isEqualTo only with a variety of fundamental types. Now write a separate version of the program that calls isEqualTo with a user-defined class type, but does not overload the equality operator. What happens when you attempt to run this program? Now overload the equality operator (with the operator function) operator== . Now what happens when you attempt to run this program?
#include <iostream>
using namespace std;
template < class T >
bool isEqualTo( const T &arg1, const T &arg2 ) { return arg1 == arg2; }
class SomeClass {
	friend ostream &operator<<(ostream &, SomeClass &);
public:
	SomeClass( int s, double t )
	{
		x = s;
		y = t;
	}
	// Overloaded equality operator. If this is not provided, the
	// program will not compile.
	bool operator==( const SomeClass &right ) const{ return x == right.x && y == right.y; }
private:
	int x;
	double y;
};
ostream &operator<<( ostream &out, SomeClass &obj )
{
	out << '(' << obj.x << ", " << obj.y << ')';
	return out;
}
int main()
{
	int a, b;
	cout << "Enter two integer values: ";
	cin >> a >> b;
	cout << a << " and " << b << " are "<< ( isEqualTo( a, b ) ? "equal" : "not equal" ) << '\n';
	char c, d;
	cout << "\nEnter two character values: ";
	cin >> c >> d;
	cout << c << " and " << d << " are "<< ( isEqualTo( c, d ) ? "equal" : "not equal" ) << '\n';
	double e, f;
	cout << "\nEnter two double values: ";
	cin >> e >> f;
	cout << e << " and " << f << " are "<< ( isEqualTo( e, f ) ? "equal" : "not equal") << '\n';
	SomeClass g( 1, 1.1 ), h( 1, 1.1 );
	cout << "\nThe class objects " << g << " and " << h << " are "<< ( isEqualTo( g, h ) ? "equal" : "not equal" ) << '\n';
	return 0;
}
