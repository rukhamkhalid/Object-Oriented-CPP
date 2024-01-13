#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;
main()
{
	system ("Color C");
	int total=1100;
	int English[10];
	int Physics[10];
	int Urdu[10];
	int Computer[10];
	int Math[10];
	int Ps[10];
	int Islamiyat[10];
	int Physics_p[10];
	int Computer_p[10];
	int obt[10];
	int Per[10];
	int Practical[10];
	for(int i=0;i<10;i++)
	{
	  English[i]=rand() %  200;
	  Urdu[i]=rand()	%  200;
	  Islamiyat[i]=rand() % 50;
	  Ps[i]=rand() % 50;
	  Math[i]=rand() % 200;
	  Physics[i]=rand() % 170;
	  Computer[i]=rand() % 150;
	  Physics_p[i]=rand() % 30;
	  Computer_p[i]=rand() % 50;
	  Practical[i]=Computer_p[i]+Physics_p[i];
	  obt[i]=English[i]+Physics[i]+Computer[i]+Math[i]+Ps[i]+Urdu[i]+Islamiyat[i]+Practical[i];
	  Per[i]=obt[i]*100/total;
	}
	 cout<<"           Inter Marksheet"<<"\n"<<"seriol no."<<"\t"<<"Urdu"<<"\t"<<"English"<<"\t"<<"Physics"<<"\t"<<"Computer"<<" "<<"Ps"<<"    "<<"Math"<<"   "<<"Islamiyat"<<"  "<<"Practical"<<" "<<"total"<<"  "<<"Obt"<<"  "<<"Percentage"<<endl;
	 for(int i=0;i<10;i++)
	{
		cout<<"Student"<<i+1<<" \t"<<Urdu[i]<<" \t"<<English[i]<<" \t"<<Physics[i]<<" \t"<<Computer[i]<<"   \t "<<Ps[i]<<" \t"<<Math[i]<<" \t"<<Islamiyat[i]<<" \t "<<Practical[i]<<" \t   "<<total<<"\t  "<<obt[i]<<"\t "<<Per[i]<<endl;
	}
	}
