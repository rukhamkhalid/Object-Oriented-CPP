//CONSTRUCTORS.....
// ITS NAME IS SAME AS CLASS NAME
// NO RETURN TYPE
//MOSTLY IT IS USED TO INITIALOZED DATA MEMBERS

#include<iostream>
using namespace std;
class Test{
	
	public:
		Test(){
			cout<<"I'M CONSTRUCTOR:"<<endl;
			cout<<"I automatically getd called, when object of class is created"<<endl;
			
		}
};int main(){
	Test t1;
}
