#include<iostream>
using namespace std;
int main()
{
	int price=989;
	cout<<"Product price is:"<<price<<endl;
	int bank_balance[5];
	for(int i=0;i<=4;i++)
	{
	 cin>>bank_balance[i];
	 int item = bank_balance[i]/price;
	 cout<<"You can purchase:"<<item<<"items:"<<endl;
     int purchase=price*item;
     cout<<"Your Remaining balance:"<<bank_balance-purchase;
	 }
	return 0;
}
