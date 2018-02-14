#include<iostream>
#include<string>
using namespace std;
class books
{
	string author;
	string title;
	int price;
	string publisher;
	int stockposition;
	public:
		void input()
		{
			cout<<"Enter the title of book";
			cin>>title;
			cout<<"enter the name of author";
			cin>>author;
			cout<<"enter the price";
			cin>>price;
			cout<<"enter the name of publisher";
			cin>>publisher;
			cout<<"enter stockposition";
			cin>>stockposition;
		}
		void check()
		{
			cout<<"enter title and author";
			string s1,s2;
			int c;
			cin>>s1;
			cin>>s2;
			int x=title.compare(s1);
			int y=author.compare(s2);
			if(x==0 && y==0)
			{
				cout<<"enter no. of copies";
				cin>>c;
				if(stockposition<c)
				{
					cout<<"requested copies not available";
				}
				else
				{
					int v=price*c;
					
				}
			}
		}
		
		}
};
int main()
{
	books auth;
	
}
