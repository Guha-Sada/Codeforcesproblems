#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;
typedef vector<bool> vb;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;
        
        vi a(n);
        for(auto &x:a) cin>>x;

        sort(a.begin(),a.end());

        int del=0,mini=a[0],maxi=a[n-1];

        if(!((mini+maxi)%2)) ;
        else 
        {
            int temp_del=0,idx=0;

            while((a[idx++]+maxi)%2) temp_del++;

            del=temp_del;
            temp_del=0;

            idx=n-1;
            while((a[idx--]+mini)%2) temp_del++;
            del=min(del,temp_del);
        }
        
        cout<<del<<"\n";
    }
    return 0;
}
