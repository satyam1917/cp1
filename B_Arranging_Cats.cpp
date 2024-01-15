#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        string s;
        string f;
        long long int c1 = 0, c2 =0;
        for(long long int i = 0;i<n;i++)
        {
            cin>>s[i];
        }
        for(long long int i = 0;i<n;i++)
        {
            cin>>f[i];
        }
        for(long long int i =0;i<n;i++)
        {
            (int) s[i]; (int) f[i];
            if(s[i]==49 && f[i] == 48)
            {
                c1++;
            }
            else if(s[i]==48 && f[i]==49)
            {
                c2++;
            }
        }
        if(c1>=c2)
        {
            cout<<c2 + abs(c1-c2)<<endl;
        }
        if(c2>c1)
        {
            cout<< c1 + abs(c1-c2)<<endl;
        }
    }
}


signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}