//Stack classs template test program.
#include <iostream>
#include "stack.h"
using namespace std;
int main()
{
	Stack<double>doubleStack(5); //size 5
	double  doubleValue = 1.1;
	cout<<"Pushing elements onto doubleStack.\n"<<endl;
	//push 5 double elements onto doubleStack
	while(doubleStack.push(doubleValue))
	{
		cout<<doubleValue<<" " ;
		doubleValue += 1.1;
	}//end while
	cout<<"\nStack is full. Connot push "<< doubleValue<<"\n\nPoping elements froom doubleStack\n";
	//pop elements from doubleStack
	while(doubleStack.pop(doubleValue))
		cout<<doubleValue<< " ";
	cout<< "\nStack is empty. Connot pop.\n";
	Stack< int > intStack;//default size 10
	int intValue =1;
	cout<<"\nPushing elements onto intSatck.\n";
	//push 10integers onto intStack
	while(intStack.push(intValue))
	{
		cout<<intValue++<< "  ";	
	}
	cout<<"\nStack is full. Cannot push "<< intValue<<"\n\nPoping elements from intStack\n";
	//pop elements from intStack
	while(intStack.pop(intValue))
		cout<<intValue<<"  ";
	cout<<"\nStack is empty. Connot pop."<<endl;
}
