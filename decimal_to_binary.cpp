#include<iostream>
using namespace std;
void decimal_to_binary(int n){
	int Binary[16];
	int i =0;
	while(n>0){
		Binary[i]=n%2;
		n=n/2;
		i++;
	}while(i>0)
	{
		cout<<Binary[i-1];
		i--;
	}
}
int main(){
	int decimal;
	cout<<"Enter Decimal Number: ";
	cin>>decimal;
	decimal_to_binary(decimal);
}
