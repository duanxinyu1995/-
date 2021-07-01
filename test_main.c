#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void bubblesort(int k[], int n);
int main()
{	
	int *nums;
	int count=0, num;
	char s;
	printf("enter the list of number:\n");
	while(scanf("%d", &num)!=EOF)
	{
		count++;
		nums=(int *)realloc(nums, count * sizeof(int));
		nums[count-1]=num;
		s=getchar();
		if(s=='\n')
			break;
	}
	printf("the list you entered is:\n");
	for(int i=0;i<count-1;i++)
	{
		printf("%d", nums[i]);
	}
	bubblesort(nums, count);
	printf("sorted list is as follow:\n");
	for(int i=0;i<count-1;i++)
	{
		printf("%d", nums[i]);
	}


}
