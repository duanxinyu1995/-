#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
void bubblesort(int k[], int n)
{
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		flag=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(k[j]>k[j+1])
			{
				temp=k[j+1];
				k[j+1]=k[j];
				k[j]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
}
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
