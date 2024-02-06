/*write a program that declares a class name car with two data members color and year
create 2 objects
and two functions
 in() to input details 
 out() to display details of latest car.*/

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
	cin.ignore();
    }
    int getyear()
    {
    	return year;
	}
     void out()
    {
    cout<<"The details of car are:"<<endl;
    cout<<"The car color :"<<color<<endl;
    cout<<"The year of  car:"<<year<<endl;
	}
 };main(){
 	CAR c1,c2;
 	int y1,y2;
 	c1.in();
 	c2.in();
 	y1=c1.getyear();
 	y2=c2.getyear();
 	
 	if(y1>y2)
 	c1.out();
 	else
 	c2.out();
 }
