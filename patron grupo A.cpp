#include <stdio.h>
int i,asterisco,j;
int main()
{
	for(i = 1; i <= 5; i++)
	{
		for(asterisco=1;asterisco<=i;asterisco++)
		{
			printf("*");
		}
			printf("\n");
	}
	for(j=4;j>=1;j--)
	{
		for(asterisco=1;asterisco<=j;asterisco++)
		{
			printf("*");
		}
			printf("\n");
	}
	return 0;
}
