#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;


void transform_array(int l,int r, vi &a,vi &d,int depth=0)
{
    int max_index=l;
 
    if(r<l) return;

    if(r==l)
    {
        d[l]=depth;
        return;
    }

    for(int i=l+1;i<=r;i++)
    {
        if(a[max_index]<a[i]) max_index=i;
    }
    d[max_index]=depth;

    transform_array(l,max_index-1,a,d,depth+1);
    transform_array(max_index+1,r,a,d,depth+1);
}


int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;
        vi a(n),d(n);
        for(auto &x:a) cin>>x;

        int l=0,r=n-1;        
        transform_array(l,r,a,d);
        
        for(auto &x:d) cout<<x<<" ";
        
        cout<<"\n";
    }

    return 0;
}
