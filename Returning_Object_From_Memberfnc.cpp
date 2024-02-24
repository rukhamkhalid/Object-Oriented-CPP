#include<iostream>
using namespace std;
class Travel
{
	private:
		int km,hr;
	public:
	Travel()
	{
		km=hr=0;
	}
	void get(){
		cout<<"Enter kilometers traveled: ";
		cin>>km;
		cout<<"Enter hours traveled: ";
		cin>>hr;
	}void show()
	{
		cout<<"You traveled "<<km<<" in "<<hr<<" hours"<<endl;
	}
 Travel add(Travel p)
{
	Travel t;
	t.km=km+p.km;
	t.hr=hr+p.hr;
	return t;
}};
int main(){
	Travel my,your,r;
	my.get();
	my.show();
	your.get();
	your.show();
	r =my.add(your);
	cout<<"Total traveling is as fellows:"<<endl;
	r.show();
}
