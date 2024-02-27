#include<iostream>
using namespace std;
int deduct(int a,int b)
{
	return a-b;
}
int sum(int a,int b)
{
	return deduct(a+b,50);
}
int total(int sal,int bonus)
{
	return sum(sal,bonus);
}
int main()
{
 cout<<total(3000,100);
 
}
