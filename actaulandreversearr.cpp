//Q)Write a program that inputs five numbers in any array and displays them in actual
// and reverse order?


#include<iostream>
using namespace std;
main()
{
	int arr[5];
	cout<<"Enter value into array:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Actual order:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"    ";
	}
	cout<<endl;
	cout<<"Reverse Order:"<<endl;
	for(int i=4;i>=0;i--)
	{
		cout<<arr[i]<<"    ";
	}
	}

	
