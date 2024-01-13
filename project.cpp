#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;
main()
{
	 system("Color C");
     int price=50;
     int balance[50];
     int item[50];
     int remainings[50];
     int purchase[50];
     for(int i=0;i<50;i++)
     {
     	balance[i]=rand() % 1000;
     	item[i]=balance[i]/price;
     	purchase[i]=item[i] * price;
     	remainings[i]=balance[i]-(price*item[i]);
	 }
	  cout<<"Serial No."<<"\t"<<"    Balance"<<"\t"<<"      Item"<<"\t"<<"    Purchase"<<"\t"<<"    Remaining"<<endl;
	 for(int i=0;i<50;i++)
	 {
	 	cout<<"Customer"<<i+1<<":\t\t"<<balance[i]<<"\t\t "<<item[i]<<"\t\t"<<purchase[i]<<"\t\t"<<remainings[i]<<endl;
	
	 }
	 
}
