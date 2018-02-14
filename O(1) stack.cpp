#include<iostream>
using namespace std;
class stack
{
	int *a;
	int top;
	int size;
	int min;
	int *minel;
	int topmin;
	public:
		int init();
		int chfull();
		int chempty();
		int push(int);
		int pop();
		int print();
};

int stack::init()				//initialize
{
	cout<<"input size "<<endl;
	cin>>size;
	a=new int[size];
	minel=new int[size];
	for(int i=0;i<size;i++)
	{
		a[i]=0;
	}
	top=(-1);
	min=a[0];
	for(int i=0;i<size;i++)
	{
		minel[i]=0;
	}
}

int stack::chfull()				//chfull
{
	if(top==size-1)
		return 1;
	else
		return 0;
}

int stack::chempty()			//chempty
{
	if(top==(-1))
		return 1;
	else
		return 0;
}

int stack::push(int data)		//push
{
	if(chfull())
		cout<<"stack is full"<<endl;
	else
	{
		top=top+1;
		a[top]=data;
		if(a[top]<=min)
		{
			min=a[top];
			minel[top]=min;
		}
	}
}

int stack::pop()				//pop
{
	int t;
	int tmin;
	if(chempty())
		cout<<"stack is empty"<<endl;
	else
	{
		t=a[top];
		tmin=minel[top];
		top=top-1;
	}
	cout<<minel[top]<<endl;
	return t;
}

int stack::print()
{
	for(int i=0;i<=top;i++)
	{
		cout<<a[i]<<"	";
	}
	cout<<endl;
}

int main()
{
	stack obj;
	obj.init();
	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.push(40);
	obj.push(50);
	obj.push(60);
	obj.push(70);
	obj.print();
	cout<<"minimum element: "<<endl;
	cout<<"pop "<<obj.pop()<<endl;
	obj.print();
}
