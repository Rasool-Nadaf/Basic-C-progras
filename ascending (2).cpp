#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	int a[100] ,j,n,t,i;
 	cout<<"How many  numbers "<<endl;
 	cin>>n;
 	cout<<"Enter elements"<<endl;
 	for(i=0;i<n;i++)
 	{
 	cin>>a[i];
 }
 	for(i=0;i<n;i++)
 	{
 	
 		for(j=0;j<n-i;j++)
 		{
 			if(a[j]>a[j+1])
 			{
 				t=a[j];
 				a[j]=a[j+1];
 				a[j+1]=t;
			 }
 			
		 }
		 	
	 }
	 cout<<"Ascending order is"<<endl;
	 for(i=0;i<n;i++)
	 {
	 
	 cout<<"  "<<a[i];
}
	return 0;
}
