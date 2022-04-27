#include<iostream>
using namespace std;
#include <Windows.h>
#include<conio.h>

int main()
{
	int h,m,n,c,v,b,i;
	cout<<"Enter time in hours  :";
	cin>>h;
	v=h*60*60;
	cout<<"Enter time in minutes:";
	cin>>m;
	b=m*60;
	cout<<"Enter time in seconds:";
	cin>>n;	
	c=v+b+n;
	cout<<h<<":"<<m<<":"<<n<<endl;
	for(i=c;i>=0;i--)
	{
		Sleep(1000);
		cout<<i<<"(s)"<<endl;
		if(i<=6)
		{
			Beep(600,400);
		}
	}
	cout<<"Countdown over."<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\tPress any key to stop ringing";
	while(!kbhit())
	{
		Beep(700,200);
		Beep(700,200);
		Beep(700,200);
		Beep(700,200);
		Sleep(500);
	}
}
