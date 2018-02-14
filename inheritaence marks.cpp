#include<iostream>
using namespace std;
class student
{
	protected:
		int rn;
	public:
		void getrn()
		{
			cout<<"enter roll no:"<<endl;
			cin>>rn;
		}
};
class marks:public student
{
	protected:
		int maths;
		int eng;
	public:
		void getmarks()
		{
			cout<<"enter marks for maths"<<endl;
			cin>>maths;
			cout<<"enter marks for maths"<<endl;
			cin>>eng;
		}
};
class result:public marks
{
	public:
		float r;
		void res()
		{
			r=(maths+eng)/2;
		}
		void display()
		{
			cout<<"Roll No.: "<<rn<<endl;
			cout<<"Math marks: "<<maths<<endl;
			cout<<"Eng Marks: "<<eng<<endl;
			cout<<"Result: "<<r<<"%"<<endl;
		}
};

int main()
{
	result o;
	o.getrn();
	o.getmarks();
	o.res();
	o.display();
}
