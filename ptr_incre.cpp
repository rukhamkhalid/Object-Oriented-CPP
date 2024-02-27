#include<iostream>
using namespace std;
int main()
{
	int a=10;
	a=11;
	int *ptr=&a;
	cout<<*ptr<<endl<<++ptr;
}
