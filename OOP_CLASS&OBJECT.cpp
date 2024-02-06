/*write a program that declares a class name car with two data members color and year
and two functions in()and out() to input and output data*/
#include<iostream>
using namespace std;
 class CAR{
 	string color;
 	int year;
 	
 public:
 	void in()
 	{
 	cout<<"Enter Details:"<<endl;
	 cout<<"Enter color of car:"<<endl;
	 getline(cin,color);
	 
	 cout<<"Enter year of car:"<<endl;
	 cin>>year;	
    }
     void out()
    {
    cout<<"The details of car are:"<<endl;
    cout<<"The car color :"<<color<<endl;
    cout<<"The year of  car:"<<year<<endl;
	}
 };main(){
 	CAR c1;
 	c1.in();
 	c1.out();
 }
