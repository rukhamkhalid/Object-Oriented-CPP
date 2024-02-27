#include<iostream>
#include<math.h>
using namespace std;
void Bin_to_dec(int bin_num,int dec,int weight);
int main()
{
	int dec;
	int bin_num;
	int weight;
	dec=0;
	weight=0;
	cout<<"Enter number in Binary:";
	cin>>bin_num;
	cout<<endl;
	Bin_to_dec(bin_num,dec,weight);
	cout<<"Binary "<<bin_num<<" = "<<dec<<" Decimal "<<endl;
}
 void Bin_to_dec(int bin_num,int dec,int weight)
 {
 	int bit;
 	if(bin_num>0)
 {
  bit=bin_num%10;
  dec=dec+bit*(pow(2,weight));
  bin_num=bin_num/10;
  weight++;
  Bin_to_dec(bin_num,dec,weight);
  
}
}

