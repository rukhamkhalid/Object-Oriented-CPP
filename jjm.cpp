#include<iostream>
using namespace std;
void Decimal_to_binary(int n)
{
	int Binary[13];
	int i=0;
	while(n>0){
		Binary[i]=n%2;
		n=n/2;
		i++;
	}i--;
	while(i>0)
	{
		cout<<Binary[i];
		i--;
	}}
	int main()
		{
		int decimal;
		cout<<"Enter the decimal number: ";
		cin>>decimal;
		Decimal_to_binary(decimal);
		return 0;
	}
	
	

