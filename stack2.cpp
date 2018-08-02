// Stack class template test program. Function main uses a
// function template to manipulate objects of type Stack< T >.
#include <iostream>
#include <string>
#include "stack.h"
using namespace std;
//function template to manipulate Stack<T>
template< typename T>
void testStack(
	Stack<T> &theStack,//reference to Stack<T>
	T value, //inital value to push
	T increment, //increment for subsecuent values
	const string stackName)//name of stack<T> object
{
	cout<<"\nPushing elements onto "<<stackName<<"\n";
	//push element onto stack
	while(theStack.push(value))
	{
		cout<<value<< " ";
		value += increment;
	}
	cout << "\nStack is full. Cannot push " << value << "\n\nPopping elements from " << stackName << '\n';
	//pop elements from Stack
	while(theStack.pop(value))
		cout<< value << " ";
	cout<<"\nStack is empty. Connot pop\n.";
}
int main()
{
	Stack<double>doubleStack(5);//size is 5
	Stack<int>intStack; //default size 10
	testStack(doubleStack,1.1,1.1,"doubleStack");
	testStack(intStack, 1, 1, "intStack");
}
