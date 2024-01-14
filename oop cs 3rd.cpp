#include<iostream>
using namespace std;
class Student{
	private:
		int per,marks,roll,classs;
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
	Student s[7];
	for(int i=0;i<7;i++){
		s[i].set_grade();
		cout<<"Grade of student"<<i+1<<"is:"<<s[i].get_grade()<<endl;		
	}
}
