#include<iostream>
using namespace std;
void  dec_to_bin(int num,int base);
int main()
{
	int dec_num;
	int base;
	base=2;
	cout<<"Enter number in Decimal:";
	cin>>dec_num;
	cout<<endl;
	cout<<"Decimal "<<dec_num<<" = ";
	dec_to_bin(dec_num,base);
	cout<<" Binary "<<endl;
}
 void dec_to_bin(int num,int base)
 {
 	if(num>0)
 {
  dec_to_bin(num/base,base);
  cout<<num%base;
}
}

