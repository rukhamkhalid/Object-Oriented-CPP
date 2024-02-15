// DESTRUCTORS....OBJECT DESTROYED...~TILDA IS USED...no return type

#include<iostream>
using namespace std;\
class Construct
{
	public:
	Construct()
	{
	 cout<<"Object is created"<<endl;
	}	
		~Construct()
		{
			cout<<"Object is destroyed"<<endl;
		}
};
int main()
{
	Construct c1;
}

