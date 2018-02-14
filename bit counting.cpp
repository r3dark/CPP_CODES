#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

/*
 * Complete the function below.
 */
vector < int > CountBits(int n) {
    int x=n;
    int a[32]={0};
    int c,i=1;
    while(x>0)
    {
        x=x^1;
        if(x==0)
        {
            a[0]++;
            a[i]=1;
        }
        x=x>>1;
        if(a[i]!=0)
        {
           cout<<a[i]<<endl;
        }
        i++;
    }
}


int main() {
    vector < int > res;
    int n;
    cin >> n;
    res = CountBits(n);
    for(int i=0; i < res.size(); i++) {
    	cout << res[i] << endl;;
    }
    return 0;
}
