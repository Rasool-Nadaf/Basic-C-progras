#include <iostream>
#include <conio.h>
#include <ctype.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	char  ch;
 	cout<<"Type in character"<<endl;
 	ch=cin.get();
 	if(isupper(ch))
 	{
 		ch=tolower(ch);
 		cout<<"  "<<"The lower-case letter is"<<"  "<<ch<<endl;
	 }
	 else
	 if(islower(ch))
	 {
	 	ch=toupper(ch);
	 	cout<<"The lower-case letter is"<<" "<<ch<<endl;
	 }
	 else
	 cout<<"It is not an alphabet "<<endl;
	return 0;
}
