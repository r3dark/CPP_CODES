#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	class node* next;
};

class queue
{
	node* front;
	node* rear;
	public:
		queue()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue(int data)
		{
			node* nn=new node;
			if(nn==NULL)
				cout<<"queue is full"<<endl;
			else
			{
				nn->data=data;
				nn->next=NULL;
				if(rear==NULL)
				{
					rear=nn;
					front=nn;
				}
				else
					rear->next=nn;
			}
		}
		int dequeue()
		{
			if(front==NULL)
			{
				cout<<"queue is empty"<<endl;
			}
			else if(front==rear)
			{
				int t=front->data;
				node* temp=rear;
				rear=front=NULL;
				delete(temp);
				return t;
			}
			else
			{
				int t=front->data;
				node* temp=front;
				front=front->next;
				delete temp;
				temp=NULL;
				return t;
			}
		}
		
};

int main()
{
	queue obj;
	obj.enqueue(10);
	obj.enqueue(20);
	obj.enqueue(30);
	obj.enqueue(40);
	obj.enqueue(50);
	obj.enqueue(60);
	obj.enqueue(70);
	obj.enqueue(80);
	//obj.print();
	cout<<"dequeue "<<obj.dequeue()<<endl;
	//obj.print();
}
