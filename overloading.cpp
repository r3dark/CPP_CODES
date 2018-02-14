#include<iostream>
using namespace std;
void func (int* i)
{
cout<<"hello";
}
void func(const int* i)
{
cout<<"abc";
}
int main()
{
const int y=10;
const int* x=&y;
func(x);
}
