#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int n,d,ed=0,od=0;
 	printf(" \n Enter the nuber");
 	scanf("%d",&n);
 	while(n>0)
 	{
 	d=n%10;
 	if(d%2==0)
 	ed++;
 	else
 	od++;
 	n=n/10;
 }
 	{
 		printf("\n Total even=:%d",ed);
 		printf("\n Total odd=:%d",od);
	 }
	return 0;
}
