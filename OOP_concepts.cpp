#include<iostream>
using namespace std;
class Student
{
	private:
		int* marks=new int[2];
		string name;
	public:
		Student()
		{
			cout<<"Enter Marks: ";
			cin>>marks[0];
			cout<<"Enter Marks: ";
			cin>>marks[1];
			cout<<"Enter Name: ";
			cin>>name;
		}Student(string n,int m1,int m2){
			marks[0]=m1;
			marks[1]=m2;
			name=n;
		}void Print_Info(){
			cout<<"Name: "<<name<<endl;
			cout<<"Marks: "<<marks[0]+marks[1]<<endl;
		}void Object_Info(Student obj){
			obj.name="Ahmed";
			obj.Print_Info();
		}
};
int main(){
	Student obj1,obj2("Rukham",53,49);
	Student *ptr =&obj1;
	ptr->Object_Info(obj2);
	obj2.Print_Info();
}
