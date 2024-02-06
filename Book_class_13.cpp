#include<iostream>
using namespace std;
class Book{
	//Declaring Class Data Members
	private:
		int BookID,Pages;
		float Price;
	
	// DECLARING Class member Functions
	public:
	void get(){
		cout<<"Enter Book ID:";
		cin>>BookID;
		cout<<"Enter pages:";
		cin>>Pages;
		cout<<"Enter price:";
		cin>>Price;
	}
	void show(){
	 cout<<"BookId = "<<BookID<<endl;
	 cout<<"Pages = "<<Pages<<endl;
	 cout<<"Price = "<<Price<<endl;
	 }
	void set(int id,int pg,float pr)
	{
		BookID= id;
		Pages = pg;
		Price = pr;
	}
	float getPrice(){
		return Price;
	}
};int main(){
	Book b1,b2;
	b1.get();
	b2.set(3,350,156.76);
	cout<<"\nThe deatil of most costly book is as follows:"<<endl;
	if(b1.getPrice() > b2.getPrice())
	 b1.show();
	else
	b2.show();
	 return 0;
}
