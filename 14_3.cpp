//(Print Array Range) Overload function template printArray of Fig. 14.1 so that it takes two additional integer arguments, namely int lowSubscript and int highSubscript . A call to this function will print only the designated portion of the array. Validate lowSubscript and highSubscript ; if either is out of range or if highSubscript is less than or equal to lowSubscript , the overloaded printArray function should return 0; otherwise, printArray should return the number of elements printed. Then modify main to exercise both versions of printArray on arrays a , b and c (lines 22–24 of Fig. 14.1). Be sure to test all capabilities of both versions of printArray .
#include <iostream>
using namespace std;
template <class T>
int printArray(T const * array,int size, int low, int high)
{
	int count = 0;
	if(size <0 || low<0|| high >=size)
		return 0;
	for(int i = low; i<= high;++i)
	{
		++count;
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return count;
}

int main()
{
	const int aCount=4, bCount = 5, cCount=6;
	int a[aCount]={2,4,8,15};
	double b[bCount] = {1.1,15.02,1.4,15.0,12.3};
	char c[cCount] = "HELLO";
	int elements;

	cout << "\nArray a contains:\n";
	elements = printArray( a, aCount, 0, aCount - 1 );
	cout << elements << " elements were output\n";
	cout << "Array a from 1 to 3 is:\n";
	elements = printArray( a, aCount, 1, 3 );
	cout << elements << " elements were output\n";
	cout<<"\n\n";

	cout << "\nArray b contains:\n";
	elements = printArray( b, bCount, 0, bCount - 1 );
	cout << elements << " elements were output\n";
	cout << "Array b from -1 to 3 is:\n";
	elements = printArray( b, bCount, -1, 3 );
	cout << elements << " elements were output\n";
	cout<<"\n\n";
	
	cout << "\nArray c contains:\n";
	elements = printArray( c, cCount, 0, aCount - 1 );
	cout << elements << " elements were output\n";
	cout << "Array a from 1 to 3 is:\n";
	elements = printArray( c, cCount, 1, 3 );
	cout << elements << " elements were output\n";
	cout<<endl;
}
