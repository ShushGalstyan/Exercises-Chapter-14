//using function-yemplate specializations.
#include <iostream>
using namespace std;
//function template printArray definition
template< typename T >
void printArray(const T * array, int count)
{
	for(int i =0; i < count; ++i)
		cout<<array[i]<< " ";
	cout<<endl;	
}
int main()
{
	const int aCount = 5;
	const int bCount =6; 
	const int cCount = 6;
	int a[aCount]={1,2,3,4,5};
	double b[bCount]={1.1,1.2,1.3,1.4,1.5,1.6};
	char c[cCount] = "HELLO" ;
	cout<<"Array a contains: "<<endl;
	printArray(a, aCount);
	cout<<"Array b contains: "<<endl;
	printArray(b,bCount);
	cout<<"Array c contains: "<<endl;
	printArray(c, cCount);
	cout<<endl;

}
