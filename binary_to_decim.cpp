#include<iostream>
#include<cmath>
using namespace std;
void binary_to_decimal(int n)
{
	int decimal=0,i=0,temp;
	while(n!=0){
		temp=n%10;
		decimal +=temp*pow(2,i);
		n=n/10;
		i++;
	}
	cout<<"Decimal Number is: "<<decimal;
}int main(){
	long binary;
	cout<<"Enter Binary  Number: ";
	cin>>binary;
	binary_to_decimal(binary);
	return 0;
}
