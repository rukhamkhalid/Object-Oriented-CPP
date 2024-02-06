#include<iostream>
using namespace std;
class Test
{
	private:
	int n;
	public:
		void in(){
			cout<<"Enter a Number:";
			cin>>n;
		}
		void out(){
			cout<<"The value of n = "<<n;
		}
};
int main()
{
	Test obj;
	obj.in();
	obj.out();
	return 0;
}
