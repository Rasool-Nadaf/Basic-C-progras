#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	int a[50],i,n,s,ag;
 	cout<<"How many subjects"<<endl;
 	cin>>n;
 	cout<<"Enter the arks"<<endl;
 	for(i=0;i<n;i++)
 	cin>>a[i];
 	s=0;
 	for(i=0;i<n;i++)
 	s=s+a[i];
 	ag=(float)s/n;
 	cout<<"Sum="<<s<<endl;
 	cout<<"Avg="<<ag<<endl;
 	
 	
	return 0;
}
