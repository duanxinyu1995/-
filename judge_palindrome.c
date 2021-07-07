#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool judge_palindrome(char *s){
	int len= strlen(s);
	char *p=s, *q=s+len-1;
	while(*p!='\0')
	{
		if(*p>='A'&&*p<='Z')
			*p +='a'-'A';
		p++;
	}
	printf("after the b2s, the strings is:%s\n", s); 
	p=s;
	while(p<q)
	{
		while(!((*p>='a'&&*p<='z')||(*p>='0'&&*p<='9'))&&p<q)
			p++;
		while(!((*q>='a'&&*q<='z')||(*q>='0'&&*q<='9'))&&p<q)
			q++;
		if(p<q&&*p==*q)
		{
			p++;
			q--;	
		}
		else
		{
			printf("*p= %d\n *q= %d\n", *p, *q);	
			return false;
		}
	}
	return true;
}

int main(){
	char *s=(char *)malloc(sizeof(char));
	char str;
	int count=0, judge;
	printf("enter the strings for judging:\n");
	while((str=getchar())!='\n')
	{
		count++;
		s= (char *)realloc(s, count*sizeof(char));
		s[count-1]=str;
	}
	count++;
	s= (char *)realloc(s, count*sizeof(char));
	s[count-1]='\0';
	judge= judge_palindrome(s);
	printf("%s is palindrome strings?\n%s\n", s,  judge==1?"TRUE":"FALSE");
}
