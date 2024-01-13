#include<iostream>
using namespace std;
main()
{
	int n,a,b,c,d,e;
	cout<<"Enter 5 digit number:"<<endl;
	cin>>n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	e=n;
	int sum=a+b+c+d+e;
	cout<<sum<<endl;
}
