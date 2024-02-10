/*WRITE A PROGRAM WITH CLASS CALCULATOR WHICH INITIALIZERS TWO DATA MEMBERS IN CONSTRUCTOR 
THEN MAKE A FUNC TO DISPLAY THEm*/

#include<iostream>
using namespace std;
class Calculator{

		int n1;
		char grade;
	public:
		Calculator(){
			n1=100;
			grade ='A';
		}
		void display(){
			cout<<"First data member: "<<n1<<endl;
			cout<<"Second data member: "<<grade<<endl;
		}
};
int main(){
	Calculator c1;
	c1.display();
}
