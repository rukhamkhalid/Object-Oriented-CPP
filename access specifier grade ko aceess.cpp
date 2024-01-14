#include<iostream>
using namespace std;
int total=300;
class Student{
	private:
		float per;
		int marks;
		char grade;
	public:
		void set_marks(int m){
		marks=m;
		}
	char get_grade(){
		per =marks*100/total;
		if(per>80)
		 grade='A';
		else if(per>60)
		 grade='B';
		else if(per>40)
		 grade='C';
		else
		 grade ='F';
		return grade;
	}
};
 int main(){
 	Student s1;
 	s1.set_marks(257);
 	cout<<s1.get_grade();
 } 
