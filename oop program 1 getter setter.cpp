//GETTER/SETTERS:VALUE DYNA OR LYNA IS CALLED GETTERS SETTERS
//Access Specifiers:
// public:Anywhere from program
// Private:Only in class
//Protected:From inherited clasess

#include<iostream>
using namespace std;
int total=300;
class Student{
	private:
		float percentage;
	public:
		int marks;
		void set_per(int marks){
			percentage=marks*100/total;
		}
		float get_per(){
			return float;
		}
};
 int main(){
 	int m=257;
 	Student s1;
 	s1.marks=m;
 	float p=get_per();
 	cout<<p;
 } 
