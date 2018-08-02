//(Function Template Overloading) Overload function template printArray of Fig. 14.1 with a nontemplate version that prints an array of character strings in neat, tabular, column format.
#include <iostream>
#include <iomanip>
using namespace std;
template<class T>
void printArray(T * const array, int size)
{
	for(int i=0; i<size;++i)
		cout<<setw(6)<<array[i];
	cout<<endl;
}

void printArray(char const * const stringArray[], int  size)
{
	for(int i=0;i<size;++i)
	{
		cout<<setw(10)<<stringArray[i];
		if((i+1)% 4==0)
			cout<<'\n';
	}
	cout<<endl;
}
int main()
{

	const int aCount = 5, bCount = 7, cCount = 6, sCount = 8;
	int a[ aCount ] = { 1, 2, 3, 4, 5 };
	double b[ bCount ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	char c[ cCount ] = "HELLO"; // 6th position for null
	const char *strings[ sCount ] = { "one", "two", "three", "four","five", "six", "seven", "eight" };
	cout << "Array a contains:\n";
	printArray( a, aCount );
	cout << "Array b contains:\n";
	printArray( b, bCount );
	cout << "Array c contains:\n";
	printArray( c, cCount );
	cout << "Array strings  contains:\n";
	printArray( strings, sCount );
	return 0;
}
