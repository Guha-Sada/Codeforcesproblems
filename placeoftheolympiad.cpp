//1013div3 D
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

bool is_valid(ll n,ll m, ll k, ll bench_length)
{
    ll benches= (m/(bench_length+1)) * bench_length+ min(m%(bench_length+1),bench_length);
    
    return benches*n>=k;
}



int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
		ll n,m,k;cin>>n>>m>>k;
        
        ll l=1,r=m,out=m;

        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(is_valid(n,m,k,mid))
            {
                out=mid;
                r=mid-1;
            }
            else l=mid+1;
        }

        cout<<out<<"\n";

	}
	return 0;
}
