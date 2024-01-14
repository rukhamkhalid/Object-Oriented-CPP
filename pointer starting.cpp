#include<iostream>
using namespace std;
int main()
{
    int arr[4]={8,9,7,10};
    int *p=arr;
    cout<<*p<<" "<<*(p+1)<<" "<<*(p+2)<<" "<<*(p+3);
}



