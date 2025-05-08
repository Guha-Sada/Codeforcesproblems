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
        int a,b,k; cin>>a>>b>>k;

        vpi bgpairs(k);
        
        vi boy_degree(a,0),girl_degree(b,0);

        for(int i=0;i<k;i++) 
        {
            cin>>bgpairs[i].first;
            bgpairs[i].first--;
            boy_degree[bgpairs[i].first]++;
        }

        for(int i=0;i<k;i++) 
        {
            cin>>bgpairs[i].second;
            bgpairs[i].second--;
            girl_degree[bgpairs[i].second]++;
        }
        /*
        sort(bgpairs.begin(),bgpairs.end());

        for(auto bg:bgpairs)
        {
            cout<<bg.first<<" "<<bg.second<<"\n";
        }
        */
        
        ll out=0;
        for(auto bg:bgpairs)
        {
            out+=k-boy_degree[bg.first]-girl_degree[bg.second]+1;
        }

        cout<<out/2<<"\n";
    }

	return 0;
}
