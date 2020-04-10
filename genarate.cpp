#include <iostream>
using namespace std;
/* run this program using the console pauser or ador input loop */

int main(int argc, char** argv)
 {
 	int sn,en,i;
 	cout<<"Enter the range"<<endl;
 	cin>>sn>>en;
 	cout<<"The range is from"<<sn<<"to"<<en<<endl;
 	for(i=sn;i<en;i++)
 	{
 		cout<<"  "<<i;
	 }
	 cout<<endl;
	return 0;
}
