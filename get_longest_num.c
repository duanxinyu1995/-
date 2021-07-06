#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int get_numsize(char *s, int *returnsize)
{
	char *p;
	int size=0, max=0, count=0, flag=0, cur=0, cur2=0;
	p=s;
	while(*p!='\0')
	{
		if(*p>='0'&&*p<='9')
		{
			size++;
			count=(flag==0)?cur:count;
			if(size>max)
			{
				cur2=count;
				max=size;
			}
			flag=1;
		}
		else
		{
			size=0;
			flag=0;
		}
		cur++;
		p++;
	}
	*returnsize=max;
	return count;
}

int main(){
	int count=0, size=0;
	char *str= (char *)malloc(sizeof(char));
	char s;
	printf("enter the string:\n");
	while((s=getchar())!='\n'){
		count++;
		str= (char*)realloc(str, count*sizeof(char));
		str[count-1]=s;
	}
	str= (char*)realloc(str, (count+1)*sizeof(char));
	str[count]='\0';
	printf("the strings you entered is :\n %s\n", str);
	count=get_numsize(str, &size);
	printf("the longest numstring is in %d, size are %d\n", count, size);}

