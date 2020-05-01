#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,i,sum=0;
    cin>>x>>y;
    if(x==y)
        cout<<sum<<endl;
    else if(x<y)
    {
        for(i=x+1; i<y; i++)
        {
            if(i%2==1 || i%2==-1)
                sum+=i;
        }
        cout<<sum<<endl;
    }
    else if(y<x)
    {
        for(i=y+1; i<x; i++)
        {
            if(i%2==1 || i%2==-1)
                sum+=i;
        }
        cout<<sum<<endl;

    }

    return 0;
}
