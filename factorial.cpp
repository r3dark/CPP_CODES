#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,f;
    do
    {
        cin>>f;
            for(int i=f-1;i>0;i--)
            {
                f=f*i;
            }
        if(f>=0)
        {
            cout<<f<<endl;
        }
    }while(f>=0);
    return 0;
}
