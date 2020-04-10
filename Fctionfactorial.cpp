#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int factorial(int);
	int n,fact;
	cout<<"Enter the non negative number"<<endl;
	cin>>n;
	fact=factorial(n);
	cout<<n<<"!="<<fact<<endl;
	return 0;
}
int n;
int factorial(int);
{
	int f=1,i;
	for(int i=;i<=n;i++)
	{
	
	f=f*i;
	
	return(f);
}
}
