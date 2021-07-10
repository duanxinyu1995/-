#include <stdio.h>
#include <string.h>

ListNode reverse_list(ListNode head){
	ListNode *prev, *cur, *next;
	prev=head;
	cur=head->next;
	prev->next=NULL;
	while(cur)
	{
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}
	return prev;

}

int main(){
	struct node{
		int val;
		ListNode *next;
	}ListNode*;

}

