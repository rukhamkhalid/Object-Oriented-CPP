#include<iostream>
using namespace std;
class Test
{
	private:
		int a;
		
	public:
	 void in(){
	 	cout<<"Enter a value: ";
	 	cin>>a;
	 	cout<<"The value in Data member is:"<<a;
	 }	
};
int main(){

Test obj;
obj.in();
	return 0;
}
