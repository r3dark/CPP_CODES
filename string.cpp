#include<iostream>
#include<string>
using namespace std;
class str
{
	char *s;
	char *t;
	int len;
	public:
		void input()
		{
			cin.getline(s);
			cin.getline(t);
		}
		str operator = (str obj)
		{
			int i=0;
			for(s=0,t=0;*s!='\0',*t!='\0';*s++,*t++)
			{
				if(*s==*t)
				{
					i++;
				}
				else
				{
					cout<<"string not equal"<<endl;
				}
			}
		}
		
}
