#include <iostream>
using namespace  std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	int a,b,c;
 	cout<<"Enter threenubers"<<endl;
 	cin>>a>>b>>c;
 	if(a>b)
 	if(a>c)
 	  cout<<a<<"is largest"<<endl;
 	  else
 	  cout<<c<<"is largest"<<endl;
 	  else
 	  if(b>c)
 	  cout<<b<<"is largest"<<endl;
 	  else
 	  cout<<c<<"is largest"<<endl;
	return 0;
}
