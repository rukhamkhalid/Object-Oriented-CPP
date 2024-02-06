#include <iostream>
using namespace std;

class Animal{
	public:
		void Sound(){
			cout<<"Making sound";
		}
};

class Cat: public Animal{
	public:
		void Feet(){
			cout<<"4 feet";
		}
};

int main(){
	Cat obj1;
	obj1.Sound();
	obj1.Feet();
	
	
}
