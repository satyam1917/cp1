#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x[4], y[4];
        long long int a,b;
        for(int i = 0;i<4;i++)
        {
            cin>>x[i]>>y[i];
            if(i>0)
            {
                a = x[i] - x[i-1];
            }
            if(a!=0)
            {
                b = a;
            }
        }
        cout<<b*b<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}