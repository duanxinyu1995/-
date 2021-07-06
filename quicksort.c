void swap(int *a, int *b)
{
	int temp;
	temp= *a;
	*a=*b;
	*b=temp;
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
		quick(k, s, j-1);
		quick(k, j+1, t);
	}
}
