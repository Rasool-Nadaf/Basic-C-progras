#include <iostream>
#include <conio.h>
using namespace std;
int a,b;

int gcd(int x,int y)
{
	int r;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return(a);
}

int main(int argc, char** argv) 
{
	int gcd(int x,int y);
	int p,l,g;
	cout<<"Enter two nubers"<<endl;
	cin>>a>>b;
	p=a*b;
	g=gcd(a,b);
	l=p/g;
	cout<<"GCD="<<g<<endl;
	cout<<"LCM="<<l<<endl;
	return 0;
}
