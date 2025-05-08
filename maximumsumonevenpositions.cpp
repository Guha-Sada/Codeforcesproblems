//Read the editorial.
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

ll max_sub(vll &a)
{
    ll g_maxi=-1e9+7,l_maxi=-1e9+7;
    for(int i=0;i<int(a.size());i++)
    {
        l_maxi=max(a[i],l_maxi+a[i]);
        g_maxi=max(g_maxi,l_maxi);
    }
    return g_maxi;
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t; cin>>t;

	while(t--)
	{
        int n; cin>>n;
        vll a(n);
        ll even_sum=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(!(i%2)) even_sum+=a[i];
        }
        
        vll even,odd;

        for(int i=0;i<n-1;i+=2) even.push_back(a[i+1]-a[i]);

        for(int i=1;i<n-1;i+=2) odd.push_back(a[i]-a[i+1]);
        
        ll b=max_sub(even),c=max_sub(odd);
        cout<<even_sum+max({0ll,b,c})<<"\n";
    }

	return 0;
}
