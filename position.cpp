#include <iostream>
#include <conio.h>
using namespace std;
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	int a[50],i,p,e,n;
 	cout<<"Enter the number of eleents";
 	cin>>n;
 	cout<<"Enter the elements";
 	for(i=0;i<n;i++)
 	cin>>a[i];
 	cout<<"Enter the search element";
 	cin>>e;
 	p=-1;
 	for(i=0;i<n;i++)
 	if(e==a[i])
 	{
 		p=i;
 		
 		
	 }
	 if(p>=0)
	 cout<<"The element"<<e<<"is present at the position"<<p<<endl;
	 else
	 cout<<"The search element"<<e<<"is not present";
	return 0;
}
