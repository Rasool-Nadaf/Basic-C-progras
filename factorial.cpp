#include <iostream>
#include <conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	
 	int n,fact,i;
 	cout<<"Enter a non negatie nuber";
 	cin>>n;
 	fact=1;
 	for(i=1;i<=n;i++)
 	fact=fact*i;
 	cout<<n<<"!="<<fact;
	return 0;
}

