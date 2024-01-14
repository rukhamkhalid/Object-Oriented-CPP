#include<iostream>
using namespace std;
int main()
{
	//What is Pointer?----->Data type which holds  the adress
	// of other data types
	int a=3;
	int* b;
	b = &a;
	
	// & --------->(Adress of )operator
	cout<<"The adress of a is "<<&a<<endl;
	cout<<"The adress of a is "<<b<<endl;
	
	// * ----->(value at)Deference operator
	cout<<"The value at adress b is "<<*b<<endl;
	
	// Pointer to Pointer 
	int** c=&b;
	cout<<"The adress of b is "<<&b<<endl;
	cout<<"The adress of b is "<<c<<endl;
	cout<<"The value of adress c is "<<*c<<endl;
	cout<<"The value at adress value_at(value_at(c)) is "<<**c<<endl;
	
	return 0;
}
