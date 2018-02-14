#include<iostream>
using namespace std;
class node
{
	public:
		node*prev;
		int data;
		node*next;
};

class linked
{
	node*head;
	public:
		linked()
		{
			head=NULL;
		}
		void addBegin(int d)
		{
			node*newnode=new node;
			newnode->data=d;
			newnode->prev=NULL;
			newnode->next=NULL;
			if(head==NULL)
			{
				head=newnode;
			}
			else
			{
				newnode->next=head;
				head->prev=newnode;
				head=newnode;
			}
		}
		
		void addEnd(int d)
		{
			node*newnode=new node;
			newnode->data=d;
			newnode->prev=NULL;
			newnode->next=NULL;
			if(head==NULL)
			{
				addBegin(d);
			}
			else
			{
				node *curr=head;
				while(curr->next)
				{
					curr=curr->next;
				}
				newnode->prev=curr;
			}
		}
		void print()
		{
			node*curr=head;
			while(curr)
			{
				cout<<curr->data<<" ";
				curr=curr->next;
			}
		}
		
		
		/*void addPosition(int d,int pos)
		{
			node*newnode=new node;
			newnode->data=d;
			newnode->prev=NULL;
			newnode->next=NULL;
			if(pos==1)
			{
				addBegin(d);
			}
			else
			{
				int p=1;
				node*curr=head;
				while(curr && p<pos-1)
				{
					curr=curr->next;
					p++;
				}
				if(!curr)
				{
					cout<<"position unavailable\n";
				}
				else if(!(curr->next))
				{
					newnode->prev=curr;
					newnode->next=curr->next;
					curr->next=newnode;
					newnode->next=newnode->prev;
				}
			}
		}*/
};

int main()
{
	linked ob;
	ob.addBegin(10);
	ob.addBegin(20);
	ob.addBegin(30);
	ob.addBegin(40);
	ob.addBegin(50);
	ob.addEnd(60);
	ob.addEnd(70);
	ob.addEnd(80);
	//ob.addPosition(30,2);
	ob.print();
}
