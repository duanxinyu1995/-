#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
int main()
{	
	int *nums=(int *)malloc(sizeof(int));
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
	for(int i=0;i<count;i++)
	{
		printf("%d", nums[i]);
	}
	bubblesort(nums, count);
	printf("sorted list is as follow:\n");
	for(int i=0;i<count;i++)
	{
		printf("%d", nums[i]);
	}
	printf("\n");
	quicksort(nums, 0, count-1);
	printf("the quicksorted list:\n");
	for(int i=0;i<count;i++)
		printf("%d", nums[i]);
	printf("\n");

}
