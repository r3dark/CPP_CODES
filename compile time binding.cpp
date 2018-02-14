#include<iostream>
using namespace std;
class item
{
	protected:
	int code;
	int price;
	public:
		void get()
		{
			cout<<"enter code and price"<<endl;
			cin>>code;
			cin>>price;
		}
};

class discount:public item
{
	float discounted;
	public:
		void finalprice()
		{
			discounted=price-(price*0.1);
		}
		void show()
		{
			cout<<"code= "<<code<<" "<<"price "<<price<<" "<<"discounted price= "<<discounted<<endl;
		}
};

int main()
{
	/*discount *p=new discount[10];
	for(int i=0;i<3;i++)
	{
		p[i].get();
	}
	for(int i=0;i<3;i++)
	{
		p[i].finalprice();
		p[i].show();
	}*/
	discount obj;
	item *ptr;
	ptr=&obj;
	ptr->get();
	((discount*)ptr)->finalprice();
	((discount*)ptr)->show();
}
