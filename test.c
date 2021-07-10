#include <stdio.h>
#include <stdlib.h>


void quicksort(int *num, int i, int j){
	if(i<j){
	int left, right, base, temp;
	left= i;
	right=j;
	base=num[i];
	while(left<right){
		while(num[right]>base&&left<right)
			right--;
		if(left<right)
			num[left++]=num[right];
		while(num[left]<=base&&left<right)
			left++;
		if(right>left)
			num[right--]=num[left];
	}
	num[left]=base;
	quicksort(num, i, left-1);
	quicksort(num, left+1, j);
	}
}

int main(){
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
	printf("the input is :\n");
	for(int i=0; i<count; i++)
	{
		printf("%d ", nums[i]);
	}
	quicksort(nums, 0, count-1);
	printf("sorted list is as follow:\n");
	for(int i=0;i<count;i++)
	{
		printf("%d ", nums[i]);
	}
}
