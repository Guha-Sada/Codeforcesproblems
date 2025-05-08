#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
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

        vs grid(2);
        cin>>grid[0]>>grid[1];
        
        bool flag=true;
        for(int i=1;i<n-1;i++)
        {   
            if(grid[0][i]=='1'&&grid[1][i]=='1')
            {
                flag=false;
                break;
            }
        }
        cout<<(flag?"YES\n":"NO\n");
    }

	return 0;
}
