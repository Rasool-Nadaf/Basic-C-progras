#include <iostream>
#include <conio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	int n,first,second,count,third;
 	cout<<"Enter the limit";
 	cin>>n;
 	first=0;
 	second=1;
 	cout<<first<< ", "<<second;   
 	third=first+second;
 	for(count=2;third<=n;count++)
 	{
 		cout<< " ,"<<third;
 		first=second;
 		second=third;
 		third=first+second;
 		
	 }
	 cout<<endl<<"Total ters="<<count<<endl;
	return 0;
}
