#include <iostream>
#include<conio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 int a[50],i,n;
 cout<<"how many elements"<<endl;
 cin>>n;
 cout<<"enter the elements;"
 ;for(i=0;i<n;i++)
 cin>>a[i]	
 ;cout<<"the elements are";
 for(i=0;i<n;i++)
 cout<<"  "<<a[i];
	return 0;
}
