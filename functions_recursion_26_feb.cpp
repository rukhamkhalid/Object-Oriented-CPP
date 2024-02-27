#include<iostream>
using namespace std;
void Table(int n,int s,int e)
{
	if(s<=e){
		cout<<n<<"*"<<s<<"="<<n*s<<endl;
		s++;
		Table(n,s,e);
	}else return;
}
int main(){
	Table(7,1,9);
}
