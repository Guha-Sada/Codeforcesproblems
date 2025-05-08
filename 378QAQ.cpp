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
        int n; cin>>n;

        vi a(n);
        for(auto &x:a) cin>>x;
        
        sort(a.begin(),a.end());

        int a_i=a[0];
        if(a_i==1)
        {
            cout<<"Yes\n";
            continue;
        }
        
        vi outsiders;
        for(int i=1;i<n;i++)
        {
            if(a[i]%a_i) outsiders.push_back(a[i]);
        }
        
        if(outsiders.empty())
        {
            cout<<"Yes\n";
            continue;
        }

        int a_j=outsiders[0];
        bool flag=true;

        for(auto x:outsiders)
        {
            if(x%a_j)
            {
                flag=false;
                break;
            }
        }
        
        cout<<(flag?"Yes":"No")<<"\n";
    }

    return 0;
}
