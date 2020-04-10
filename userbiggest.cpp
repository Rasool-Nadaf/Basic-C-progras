#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int biggest(int,int,int);
	int a,b,c,bigg;
	cout<<"Enter three nubers";
	cin>>a,b,c;
	bigg=biggest(a,b,c);
	cout<<"Biggest="<<bigg<<endl;
	return 0;
}
int intx,inty,intz;
int biggest(intx,inty,intz)
{
	int big;
	big=x>y?(x>z?x:z):(y>z?y:z);
	return(big);
}
