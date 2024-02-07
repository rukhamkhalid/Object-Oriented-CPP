#include<iostream>
using namespace std;
class Array
{
	//Declaring Data memebers
	private:
	int a[5];
	//Declaring member function
	public:
	void fill();
	void display();
	int max();
	int min();
};
// Defining member functions
void Array::fill()
{
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a["<<i<<"]: ";
		cin>>a[i];
	}
}
void Array::display()
{
	for(int i=0;i<5;i++)
	{
		cout<<"a["<<i<<"]: "<<a[i]<<endl;
	}
}int Array::max()
{
	int m= a[0];
	for(int i=0;i<5;i++)
	 if(m<a[i])
	 m = a[i];
  return m;
}
int Array::min()
{
	int m = a[0];
		for(int i=0;i<5;i++)
	 if(m<a[i])
	 m = a[i];
  return m;
}
int main()
{
	Array arr;
	arr.fill();
	cout<<"You entered the following values:"<<endl;
	arr.display();
	cout<<"Maximum value = "<<arr.max()<<endl;
	cout<<"Minimum value = "<<arr.min();
}
