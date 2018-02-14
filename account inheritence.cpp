#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class person
{
	protected:
	string name;
	int code;
	public:
		void create()
		{
			cout<<"Enter name"<<endl;
			getline(cin,name);
			cout<<"Enter code"<<endl;
			cin>>code;
		}
};

class account:public virtual person
{
	protected:
	int pay;
	public:
		void update()
		{
			cout<<"enter amount to pay"<<endl;
			cin>>pay;
		}
};

class admin:public virtual person
{
	protected:
	int experience;
	public:
		void update()
		{
			cout<<"enter experience"<<endl;
			cin>>experience;
		}
};

class master:public account,public admin
{
	public:
		void display()
		{
			cout<<name<<endl;
			cout<<code<<endl;
			cout<<experience<<endl;
			cout<<pay<<endl;
		}
};

int main()
{
	master obj;
	obj.create();
	obj.account::update();
	obj.admin::update();
	obj.display();
}
