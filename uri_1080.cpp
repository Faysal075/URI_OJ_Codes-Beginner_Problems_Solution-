#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,t,c = 0,t1;
    for(i=0; i<100; i++)
    {
        cin>>n;
        c++;
        if(n>i)
        {
            t1 = c++;
            t = n;
        }
    }
    cout<<t<<endl<<t1<<endl;

    return 0;
}
