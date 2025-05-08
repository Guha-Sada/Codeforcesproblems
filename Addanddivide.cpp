//I read the editorial.

#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

const ll INF=1e9;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t; cin>>t;

    while(t--)
    {
        ll a,b,out=INF; cin>>a>>b;        
        for(int i=0;i<31;i++)
        {
            ll temp_a=a;
            if(b+i>=2)
            {
                ll operations=i;
                while(temp_a)
                {
                    temp_a/=(b+i);
                    operations++;
                }
                out=min(out,operations);
            }
        }
        cout<<out<<"\n";
    }

    return 0;
}
