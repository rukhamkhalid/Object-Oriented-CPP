//Function Overloading........>same name different parameters
// book()||book(int p,int r)||book(int a,int b,int c)
#include<iostream>
using namespace std;
int fact(int n);
void main( )
{
	int res;
	res=fact(5);
	cout<<"enter  the num"res;
}
int fact(int num)
{
	if(num==0)
	
	return num*fact(num-1);
}
