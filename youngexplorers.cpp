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
        int n; cin>>n;
        vi e(n);
        map<int,int> inexperience_freq;
        
        for(int x: e)
        {
            cin>>x; inexperience_freq[x]++;        
        }

        int groups=0,unused=0;
        for(auto it: inexperience_freq)
        {
            it.second+= unused;
            groups+= (it.second/it.first);
            unused= it.second%it.first;
        }

        cout<<groups<<"\n";
	}

	return 0;
}
