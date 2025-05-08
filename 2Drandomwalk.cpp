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
        double n,px,qx,py,qy; cin>>n>>px>>qx>>py>>qy;
        
        if(!n) continue;
        
        cout<<n*(px-qx)<<" "<<n*(py-qy)<<"\n";

	}

	return 0;
}
