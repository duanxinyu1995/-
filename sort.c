#include <stdio.h>
#include "sort.h"

void bubblesort(int k[], int n)
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

void swap(int a, int b)
{
	int temp;
	temp= a;
	a=b;
	b=temp;
}
void quicksort(int k[], int s, int t)
{
	int i, j;
	if(s<t){
		i=s;
		j=t+1;
		while(1){
			do i++;
			while(!(k[s]<=k[i] || i==t));
	 		do j--;
			while(!(k[s]>=k[j] || j==s));
			if(i<j)
				swap(k[i], k[j]);
			else
				break;
		}
		swap(k[s], k[j]);
		quicksort(k, s, j-1);
		quicksort(k, j+1, t);
	}
}
