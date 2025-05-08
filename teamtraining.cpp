//1013div3 B
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
        int n,x; cin>>n>>x;
        
        vi a(n);
        for(auto &x:a) cin>>x;

        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());

        int curr_count=0,teams=0;
        for(int i=0;i<n;i++)
        {
            curr_count++;
            if(curr_count*a[i]>=x)
            {
                teams++;
                curr_count=0;
            }
        }
        
        cout<<teams<<"\n";
    }

	return 0;
}
