#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *k, int n)
{
	int flag=0, temp;
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
void quicksort(int* nums, int start, int end) {
	if (start < end) {
		int i = start, j = end, temp = nums[start];
		while (i < j) {
			while (nums[j] > temp && i < j)
				j--;
			if (i < j)
				nums[i++] = nums[j];
			while (nums[i] <= temp && i < j)
				i++;
			if (i < j)
				nums[j--] = nums[i];
		}
		nums[i] = temp;
		quicksort(nums, start, i - 1);
		quicksort(nums, i + 1, end);
	}
}
int main()
{	
	int *nums=(int*)malloc(sizeof(int));
	int count=0, num;
	char s;
	printf("enter the list of number:\n");
	while(scanf("%d", &num)!=EOF)
	{
		s=getchar();
		if(s=='\n')
			break;
		count++;
		nums=(int *)realloc(nums, count*sizeof(int));
		nums[count-1]=num;
	}
	printf("the list is:\n");
	for(int i=0;i<count;i++)
		printf("%d ", nums[i]);
	quicksort(nums, 0, count-1);
	printf("sorted list is:\n");
	for(int i=0;i<count;i++)
		printf("%d ", nums[i]);
}
