
#include <stdio.h>

int bs_save_convert(int n)
{
	int result = 0;
	int size= sizeof(n);
	while(size--)
	{
		result |= ((n&0xFF) << (size*8));
		n>>=8;
	}
	return result;
}


int main(){
	int num , num1;
	printf("Enter the number you want convert:\n");
	scanf("%d", &num);
	num1= bs_save_convert(num);
	printf("%d  converted to :\n%d\n", num, num1);
       return 0;	
}
