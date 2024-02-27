#include<iostream>
using namespace std;
int main()
{
	int r[7]={6,7,9,4,8,2,5};
	int *p=r;
	//cout<<p[4]<<endl;
	//cout<<*(p+4)
	for(int i=0;i<7;i++)
	{
		cout<<*(p+i)<<endl;
	}
	}
