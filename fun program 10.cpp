#include<iostream>
using namespace std;
void prime(int n)
{
	int c,p;
	p=1;
	for(c=2;c<=n/2;c++)
	if(n%c==0)
	{
		p=0;
		break;
	}
	if(p==1)
	cout<<n<<"is a prime number";
	else
	cout<<n<<"is not prime number";
	}
	void prime(int n)
	{
		int num;
		cout<<"Enter an integer.";
		cin>>num;
		prime(num);
	}
