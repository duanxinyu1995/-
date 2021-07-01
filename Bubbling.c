void bubblesort(int k[], int n)
{
	int i, j, temp;
	for(i=0;i<n-1;i++)
	{
		int flag=0;
		for(j=0;j<=n-i;j++)
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
