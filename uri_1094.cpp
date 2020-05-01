#include<bits/stdc++.h>
#define filein freopen ("in.txt", "r", stdin);
#define fileout freopen ("out.txt", "w", stdout);
using namespace std;

int main()
{
    //filein;
    int tc, i, amnt, c=0, r=0, s=0, total=0;
    char catg;
    cin>>tc;
    for(i=1; i<=tc; i++)
    {
        cin>>amnt>>catg;
        total+=amnt;

        if(catg == 'C')
          c+=amnt;
        else if(catg == 'R')
            r+=amnt;
        else if(catg == 'S')
            s+=amnt;
    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(float)(c*100.0/total)<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(float)(r*100.0/total)<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(float)(s*100.0/total)<<" %"<<endl;

    return 0;
}
