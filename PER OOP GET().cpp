#include<iostream>
using namespace std;
int total=300;
class Student{
	private:
		float percentage;
	public:
		int marks;
		void set_per(){
			percentage=marks*100/total;
		}
		float get_per(){
			return percentage;
		}
};
 int main(){
 	int m=257;
 	Student s1;
 	s1.marks=m;
 	s1.set_per();
 	float p=s1.get_per();
 	cout<<p;
 } 
