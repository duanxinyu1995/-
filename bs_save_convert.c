
#include <stdio.h>

int bs_save_convert(int n)
{
	int result = 0;
	int size= sizeof(input);
	while(size--)
	{
		result |= ((input &oxFF) << (size*8));
		inut>>=8;
	}
	return result;
}
