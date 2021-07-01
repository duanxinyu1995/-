#include <stdio.h>

void bubblesort(int k[], int n);
int main()
{	
	int *nums = (int *)malloc(sizeof(int));
	int count, num;
	printf("enter the list of number:\n");
	while(scanf("%d", &num)!=EOF)
	{
		count++;
		nums=(int *)realloc(count * sizeof(int));
		nums[count-1]=num;
		s=getchar();
		if(s=='\n')
			break;
	}
	printf("the list you entered is:\n");
	for(int i=0;i<n-1;i++)
	{
		printf("%d", nums[i]);
	}
	bubblesort(nums, count);
	printf("sorted list is as follow:\n");
	for(int i=0;i<n-1;i++)
	{
		printf("%d", nums[i]);
	}


}
