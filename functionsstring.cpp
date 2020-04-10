#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	char st[100];
 	int l;
 	cout<<"Enter the string"<<endl;
 	cin.getline(st,100);
 	l=strlen(st);
 	cout<<"Length="<<l<<endl;
	return 0;
}
