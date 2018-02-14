#include<iostream>
using namespace std;
class queue
{
	int* arr;
	int front;
	int rear;
	int size;
	public:
		queue()
		{
			front=-1;
			rear=-1;
			cout<<"enter size"<<endl;
			cin>>size;
			arr=new int[size];
		}
		int enqueue (int data)
		{
			if((rear+1)%size==front)
				cout<<"queue is  full"<<endl;
			else
			{
				rear=(rear+1)%size;
				arr[rear]=data;
				if (front==(-1))
				{
					front=rear;
				}
			}
		}
		int dequeue ()
		{
			if(front==-1)
				cout<<"queue is empty"<<endl;
			else if(front==rear)
			{
				int t=arr[front];
				front=rear=-1;
				return t;
			}
			else
			{
				int t=arr[front];
				front=(front+1)%size;
				return t;
			}
		}
		int print()
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<arr[i]<<"	";
			}
			cout<<endl;
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
	obj.print();
	cout<<"dequeue "<<obj.dequeue()<<endl;
	obj.print();
}
