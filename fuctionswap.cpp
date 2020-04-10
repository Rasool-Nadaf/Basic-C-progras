#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	int swap(int&,int&);
 	int a,b;
 	cout<<"Enter two number";
 	cin>>a>>b;
 	cout<<"Before calling the function:a="<<a<<"and b="<<b<<endl;
 	swap(a,b);
 	cout<<"After calling the function:a="<<a<<"and b="<<b<<endl;
 	
	return 0;
}
void swap(int&x,int&y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
