#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

bool bfs(int n,int m)
{
    queue<int> piles;

    piles.push(n);

    while(!piles.empty())
    {
        int cur=piles.front();
        piles.pop();
        if(cur%3) continue;
        
        int big=2*cur/3,small=cur/3;

        if(big==m||small==m)
        {
            return true;
        }
        piles.push(big);
        piles.push(small);
    }
    return false;
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
        int n,m;cin>>n>>m;

        if(m==n)cout<<"YES\n";
        
        else if(m>n||n%3) cout<<"NO\n";
        
        else cout<<(bfs(n,m)?"YES\n":"NO\n");
        
	}

	return 0;
}
