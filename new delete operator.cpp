#include<iostream>
#include<stdlib.h>
using namespace std;
void * operator new(size_t s) //unsigned int->size_t
{
	cout<<"new called"<<endl;
	void *p;
	p=malloc(s);
	return p;
}
void operator delete(void *p)
{
	cout<<"delete called"<<endl;
	free(p);
}

int main()
{
	int *x=new int;
	delete x;
	cout<<*x<<endl;
	*x=NULL;
	cout<<*x<<endl;
}
