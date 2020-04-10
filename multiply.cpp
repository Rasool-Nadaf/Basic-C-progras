#include<stdio.h>
int main()
{
	int no,b,m=1;
	printf("Enter any number\n");
	scanf("%d",&no);
	while(no!=0)
	{
		b=no%10;
		m=m*b;
		no=no/10;
	}
	printf("Total multiply of digits=%d",m);
}

