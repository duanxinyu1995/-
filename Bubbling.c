
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
