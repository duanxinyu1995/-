#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverse_str(char *s)
{
	int len= strlen(s);
	char *ret = (char *)malloc((len+1)*sizeof(char));
	for(int i=0;i<len;i++)
	{
		ret[i]=s[len-1-i];
	}	
	ret[len]='\0';
	return ret;
}

int main()
{
	char *ret;
	char *s=(char*)malloc(sizeof(char));
	int count=0;
	char str;
	printf("please enter the strings before reversing:\n");
	while((str=getchar())!=EOF)
	{
		if(str=='\n')
			break;
		count ++;
		s=(char*)realloc(s, count*sizeof(char));
		s[count-1]=str;
		}
	
	s=(char*)realloc(s, (count+1)*sizeof(char));
	s[count]='\0';
	ret=reverse_str(s);
	printf("the reversed strings is :\n %s\n", ret);
	return 0;
}
