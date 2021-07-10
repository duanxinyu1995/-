#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* string_sort(char *s){
	int i=0,j=0, hash[128], len=strlen(s);
	while(*s!='\0')
	{
		hash[*s]++;
		s++;
	}
	
	while(hash[127])
	{
		s[j++]=i;
		hash[i]--;
		if(hash[i]==0&&i!=127)
			i++;
	}
	s[len]='\0';
}


int main(){
	char s, *s1;
	int count=0;
	char *str=(char *)malloc(sizeof(char));
	printf("please enter the strings:\n");
	while((s=getchar())!='\n'){
		count++;
		str=(char*)realloc(str, count*sizeof(char));
		str[count-1]=s;
	}
	count++;
	str=(char*)realloc(str, count*sizeof(char));
	str[count-1]='\0';
	printf("the strings you entered is :\n %s\n", str);
	string_sort(str);
	printf("the sorted strings is:\n %s\n", s1);
}
