#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float a,b,c,s,ag; 
	cout<<"enter three numbers";
	cin>>a>>b>>c;
	s=a-b-c;
	ag=s/5;
	cout<<"sub="<<s<<"avg="<<ag;
	return 0;
}
