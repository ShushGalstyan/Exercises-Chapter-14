//stack class template
#ifndef STACK_H
#define STACK_H
template<typename T>
class Stack
{
public:
	explicit Stack(int =10);//default constructor(stack size 10)
	//destructor
	~Stack()
	{
		delete [] stackPtr;//deallocate internaml space for stack
	}
	bool push(const T &);//push an element onto the stack
	bool pop(T &);
	//determine wheter stack is empty
	bool isEmpty() const
	{
		return top == -1;
	}
	//determine whether Satck is full
	bool isFull() const
	{
		return top == size -1;
	}
private:
	int size;//#of element in the stack
	int top;//locastion of the top element(-1 means empty)
	T *stackPtr;//pointer to internal representation of the stack
};
//constructor template
template<typename T>
Stack< T >::Stack(int s)
	: size(s>0? s:10),//validate size
	top(-1), //stack initaliz empty
	stackPtr(new T[size])//allocate memory for elements
{
	//empty body
}
//push element onto Stack
//if succesful return true; otherwise return false
template<typename T>
bool Stack< T >::push(const T &pushValue)
{
	if(!isFull())	
	{
		stackPtr[++top]= pushValue;//place item on stack
		return true;
	}
	return false;
}
//pop element off stack
//if succesful return true, otherwise return false
template< typename T>
bool Stack< T >:: pop(T &popValue)
{
	if(!isEmpty())
	{
		popValue = stackPtr[top--]; //remove item frome Stack
		return true;//pop successful
	}
	return false;
}
#endif
