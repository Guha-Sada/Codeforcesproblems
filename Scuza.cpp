#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
        int n,q; cin>>n>>q;

        vi a(n),k(q);
        for(auto &x:a) cin>>x;
        for(auto &x:k) cin>>x;
        
        vll pre(n+1,0);
        vi max_a(n);
        int maxi=a[0];
        for(int i=1;i<=n;i++) 
        {
            pre[i]=pre[i-1]+a[i-1];
            maxi=max(maxi,a[i-1]);
            max_a[i-1]=maxi;
        }

        for(int i=0;i<q;i++)
        {
            int idx=upper_bound(max_a.begin(),max_a.end(),k[i])-max_a.begin();
            cout<<pre[idx]<<" ";
        }
        cout<<"\n";

    }

	return 0;
}
