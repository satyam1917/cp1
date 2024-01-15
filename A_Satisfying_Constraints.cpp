#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long int>x3;
        long long int small = INT32_MAX;
        long long int large = INT32_MIN;
        long long int count = 0;
        while(n--)
        {
            long long int a,x;
            cin>>a;
            cin>>x;
            if(a==1){
                if(x>large)
                {large = x;}
            }
            if(a==2){
                if(x<small)
                {
                    small = x;
                }
            }
            if(a==3)
            {
                x3.push_back(x);
            }
        }
        for(int i = 0; i<x3.size();i++)
        {
            if(small>=x3[i] && large<=x3[i])
            {
                count++;
            }
        }
        if(small<large){cout<<"0"<<endl;}
        else {cout<<small - large +1 - count<<endl;}
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}