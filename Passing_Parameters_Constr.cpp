#include<iostream>
#include<string.h>
using namespace std;

class Tv
{
	private:
	 char Brand_Name[20];
	 char Model[10];
	 float Retail_Price;
	 
	public:
	 Tv(char Brand[],char Mod[],float price);
	 void Change(char Brand[],char Mod[],float price);
	 void Display();
};

Tv :: Tv(char Brand[],char Mod[],float price)
{
	strcpy(Brand_Name,Brand);
	strcpy(Model, Mod);
	Retail_Price;
}
 void Tv :: Change(char Brand[],char Mod[],float price)
{
	strcpy(Brand_Name,Brand);
	strcpy(Model, Mod);
	Retail_Price;
}
void Tv :: Display()
{
	cout<<"Brand Name: "<<Brand_Name<<endl;
	cout<<"Model: "<<Model<<endl;
	cout<<"Price: "<<Retail_Price<<endl;
}
int main(){
	Tv Test("SONY","HDTV",25000);
	cout<<"Displaying the object.... "<<endl;
	Test.Display();
	Test.Change("Toshiba","STDV",22000);
	cout<<"Displaying object after change...."<<endl;
	Test.Display();
	
	return 0;
}

