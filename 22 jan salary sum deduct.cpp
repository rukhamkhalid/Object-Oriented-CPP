#include<iostream>
using namespace std;
int deduct(int a,int b)
{
	return a-b;
}
int sum(int a,int b)
{
	return a+b;
}
int total(int sal,int bonus)
{
	return deduct(sum(sal,bonus),50);
}
int main()
{
	cout<<total(3000,100);
}
