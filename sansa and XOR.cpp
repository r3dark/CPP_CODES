#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,s;
    //cin>>t;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n%2==0)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=2;j<n;)
            {
                s=a[i]^a[j];
                j=j+2;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}

