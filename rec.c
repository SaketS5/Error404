#include<stdio.h>
int btod(int);
int main()
{
	int bin,deci;
	printf("Enter a binary number:\n");
	scanf("%d",&bin);
	deci=btod(bin);
	printf("The decimanl value od %d is %d\n",bin,deci);
return 0;
}
	int btod(int bin)
{
	if(bin==0)
return 0;
	else  
return(bin%10+btod(bin/10)*2);
}
