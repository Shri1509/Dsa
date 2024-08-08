#include<iostream>;
#include<bits/stdc++.h>
using namespace std;
-------linked list all code ------------------------------------------------------------------------
---------reversing linked list----------------------------------------------------------------------
void reversing_linked_list(Node*head)
{
	Node*temp=head;
	Node*prev=NULL;
	while(temp!=NULL)
	{
		Node*front=temp->next;
		temp->next=prev;
		prev=temp;
		temp=front;
	}
	return prev;
}
--------------------middle of linked list-------------------------------------------------------------------
void middle_linked_list(Node*head)
{
	if(head==NULL|| head->next==NULL)
	{
		return head;
	}
	int n=0;
	Node*q=head;
	while(q!=NULL)
	{
		n++;
		q=q->next;
	}
	Node*p=head;
	int mid=(n/2)+1;
	int i=1;
    while(p!=NULL)
    {
    	if(i==mid)
    	{
    		return p->data;
		}
		p=p->next;
	}

}
-------------------------------merge two sorted likned list--------------------------------------------------

void mergetwo linked_list(Node*head1,Node*head2)
{
	Node*dummy=new node(-1);
	Node*temp=dummy;
	Node*t1=head1;
	Node*t2=head2;
	while(t1!=NULL&&)
	{
		if(t1->data>t2->data)
		{
			temp->next=t2->data;
			t2=t2->next;
		}
		else
		{
			temp->next=t1->data;
			t1=t1->next;
		}
		temp=temp->next;
	}
		if(t1!=NULL)
		{
			temp->next=t1;
		}
		else
		{
		   temp->next=t2;
		}
	}
	return dummy->next;
}
---------------------------------remove nth node---------------------------
void removenth_nodefromback(Node*head,int b)
{
 ListNode* res = new ListNode(0, head);
        ListNode* dummy = res;

        for (int i = 0; i < n; i++) {
            head = head->next;
        }

        while (head != nullptr) {
            head = head->next;
            dummy = dummy->next;
        }

        dummy->next = dummy->next->next;

        return res->next;  
}
-----------------------------cycle in linkedlist--------------------------------------
bool detect_cycleinlinkedlist(Node*head)
{
	Node*slow=head;
	Node*fast=head;
	while(fast!=NULL&&fast->next==NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			return true;
		}
	}
	return false;
}
------------------------------------linked list -------------------------------------
