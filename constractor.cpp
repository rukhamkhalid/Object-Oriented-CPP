//constructor?
//ye public m bnta h
#include<iostream>
using namespace std;
class Student{
	private:
		int marks,roll,classs;
		char grade;
		string name;
	public:
	 Student(){
		 cout<<"Enter Name: ";
		 cin>>name;
		 cout<<"Enter class: ";
		 cin>>classs;
		 cout<<"Enter Roll: ";
		 cin>>roll;
		 cout<<"Enter marks: ";
		 cin>>marks;
		}
		void set_grade(){
			if(marks>80)       grade='A';
			else if(marks>60)  grade='B';
			else if(marks>60)  grade='C';
			else                grade='F';
		}
		char get_grade()  { return grade;
		}
};
int main(){
	Student s1;
	s1.set_grade();
	cout<<"Grade of student is "<<s1.get_grade()<<endl;
	Student s2;
	s2.set_grade();
	cout<<"Grade of student is "<<s2.get_grade()<<endl;
}
