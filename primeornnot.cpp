#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int  main() {
	long long int n;
	cin>>n;
	long long int x=n;
    long long int c=0,z=0;
    for(int i=2;i<=(sqrt(n));i++)
    {
        if(x%i==0)
        {
            c++;
            z=i;
            break;
        }
    }
    if(c>0)
    {
        cout<<z<<endl;
    }
    else
        cout<<1<<endl;
}
