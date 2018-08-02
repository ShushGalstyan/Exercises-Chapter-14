//(Selection Sort Function Template) Write a function template selectionSort based on Fig. 8.13. Write a driver program that inputs, sorts and outputs an int array and a float array. 
#include <iostream>
#include <iomanip>
using namespace std;
//template<class T>
//void swap(T * const, T * const);
//function template for Sort
template<class T>
void Sort(T* const array, int size )
{
	for(int pass = 0; pass < size; ++pass)
		for(int j= pass+1; j<size ; ++j)
			if (array[pass] > array[j])
			{
				T temp = array[pass];
				array[pass]=array[j];
				array[j] = temp;
			}
}
//template <class T>
//void swap(T * const elementPtr, T * const elementPtr2)
//{
//	T temp = *elementPtr;
//	*elementPtr = *elementPtr2;
//	*elementPtr2 = temp;
//}

int main()
{
	const int size = 5;
	int int_array[size] = {12,15,48,3,9};
	//process an array of integers
	cout<<"Integer data items in original order\n";
	for (int i= 0; i< size; ++i)
		cout<<setw(6)<<int_array[i];
	cout<<endl;
	Sort(int_array, size);
	cout<<"\nInteger data items in ascending order\n";
	for(int i=0; i<size; ++i)
		cout<<setw(6)<<int_array[i];
	cout<<"\n\n"; 
	double float_array[size]={1.1,5.2,48.3,17.3,15.1};
	cout << "doubleing point data items in original order\n";
	for(int i = 0; i< size; ++i)
		cout<<setw(6)<<float_array[i];
	Sort(float_array, size);
	cout<<"\ndoubling point data items in ascending order\n";
	for (int i=0; i<size; ++i)
		cout<<setw(6)<<float_array[i];
	cout<<endl;
	return 0;
}
