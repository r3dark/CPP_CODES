#include<iostream>
using namespace std;
class item
{
	int code;
	int price;
	public:
		void get()
		{
			cout<<"enter code and price"<<endl;
			cin>>code;
			cin>>price;
		}
		void show()
		{
			cout<<"code= "<<code<<" "<<"price "<<price<<endl;
		}
};

int main()
{
	item *p=new item[10];
	for(int i=0;i<10;i++)
	{
		p[i].get();
	}
	for(int i=0;i<10;i++)
	{
		(p+i)->show();
	}
}
