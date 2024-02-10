//Encapsulation........hiding data
//Access specifiers...commands....private,public,protected

#include<iostream>
using namespace std;
class Employee
{
	public:
	 int salary;
		set()
		{
			cout<<"Salary Initialized"<<endl;
			salary =50000;
		}
};
main()
{
	Employee e1;
	e1.set();
	cout<<"This is outside class salary is: "<<e1.salary<<endl;
}
