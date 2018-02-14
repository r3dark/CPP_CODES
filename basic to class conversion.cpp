#include<iostream>
using namespace std;
//cms to feet inches
class imperial
{
	int feet;
	int inches;
	public:
		imperial()
		{}
		imperial(int cms)	//conversion constructor
		{
			int x=cms/2.54;
			feet=x/12;
			inches=x-feet*12;
		}
		void display()
		{
			cout<<feet<<"ft "<<inches<<"in";
		}
};
int main()
{
	int cms;
	cout<<"enter cms"<<endl;
	cin>>cms;
	imperial obj;
	obj=cms;	//call conversion constructor
	obj.display();
}
