#include<iostream>
using namespace std;
void Table(int n,int i);
void Table(int n){
	int i=1;
	if(i<=10)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;
		Table(n,i);
	}else return;
}void Table(int n,int i){
	if(i<=10){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;
		Table(n,i);
	}else return;
}
void Table(int n,int s,int e)
{
	if(s<=e){
		cout<<n<<"*"<<s<<"="<<n*s<<endl;
		s++;
		Table(n,s,e);
	}else return;
}
int main(){
	Table(8);
	Table(7,1,5);
}
