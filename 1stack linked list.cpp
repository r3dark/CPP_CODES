#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	class node* next;
};

class stack				//maintain the head in this
{
	public:
	node* head;
	stack()
	{
		head=NULL;
	}

	void push (int data)
	{
		node* newnode=new node;
		newnode->data=data;
		newnode->next=head;
		head=newnode;
	}
	
	int pop()
	{
		if(head==NULL)
			cout<<"stack is empty"<<endl;
		else
		{
			node*temp=head;
			head=head->next;
			int t=temp->data;
			delete temp;
			temp=NULL;
			return t;
		}
	}
	void print()
	{
		node* current=head;
		while(current)
		{
			cout<<current->data<<"    ";
			current=current->next;
		}
		cout<<endl;
	}
};

int main()
{
	stack obj;
	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.push(40);
	obj.push(50);
	obj.push(60);
	obj.push(70);
	obj.push(80);
	obj.print();
	cout<<"pop "<<obj.pop()<<endl;
	obj.print();
}
