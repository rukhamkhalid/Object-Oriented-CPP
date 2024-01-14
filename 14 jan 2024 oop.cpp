//main sy any wali values in functions ko dy gy tw setter funtion
// value ko main m access krna  is called getter
// object main m bnaty hyn 
#include<iostream>
using namespace std;

class Cal{
	private:
		int a,b,ans;
		char op;
	public:
    	void Set_values(int x,int y,char c){
    		a=x;
    		b=y;
    		op=c;
		}
		void Set_ans(){
			switch(op){
				case '+':
					ans=a+b;
					break;
				case  '-':
					ans=a-b;
					break;
				case '*':
				 ans=a*b;
				 break;
				case '/':
				 ans=a/b;
				 break;	
				case '%':
					ans=a%b;
					break;
						
			}
		}
		int get_ans(){
			return ans;
		}
};
int main(){
	Cal p1,p2;
	p1.Set_values(10,20,'+');
	p2.Set_values(20,10,'-');
	p1.Set_ans();
	p2.Set_ans();
	int ans=p1.get_ans();
	cout<<ans<<endl<<p2.get_ans();
		
}
