#include <iostream>
#include <ctype.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	int d,re=0,i;
 	char ch;
 	cout<<"Enter the word"<<endl;
 	ch=cin.get();
 	while(ch!=0)
 	{
 		d=ch%10;
 		re=re*10+d;
 		ch=ch/10;
	 }
	 cout<<"reerse word is"<<re<<endl;
	return 0;
}
