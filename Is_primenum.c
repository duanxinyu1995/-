#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsPrime(unsigned int n)
{
	if(n<=1)
		return false;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
			return true;

	}
	return false;
}

int main()
{
	int num;
	printf("Enter the number for judging:\n");
	scanf("%d", &num);
	printf("%d\n",IsPrime(num)); 
}
