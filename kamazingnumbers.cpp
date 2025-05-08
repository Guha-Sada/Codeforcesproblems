//I read the editorial, and watched this youtube video explaining the logic:https://www.youtube.com/watch?v=uHupNxLi_uk
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<set<int>> vsi;
typedef long long ll;

int main()
{
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

        int t;cin>>t;

        while(t--)
        {
                int n;cin>>n;
		vvi a(n+1);

		for(int i=0;i<n;i++)
		{
			int a_val;cin>>a_val;
			a[a_val].push_back(i);
		}

		for(int i=1;i<=n;i++)
		{
			if(a[i].empty()) continue;
			
			a[i].push_back(n);
		}
		vi k_candidates(n+1);
		for(int i=1;i<=n;i++)
		{
			if(a[i].empty())
			{
				k_candidates[i]=n+1;
				continue;
			}

			k_candidates[i]=a[i][0]+1;

			for(int j=0;j<int(a[i].size())-1;j++) k_candidates[i]=max(k_candidates[i],a[i][j+1]-a[i][j]);
			
		}
		
		vsi min_candidates(n+1);
		for(int i=1;i<=n;i++)
		{
			if(k_candidates[i]<=n) min_candidates[k_candidates[i]].insert(i);
		}


		int maxi=n+1;
		for(int i=1;i<=n;i++)
		{
			if(min_candidates[i].empty()) cout<<(maxi==n+1?-1:maxi)<<" ";

			else
			{
				maxi=min(maxi,*(min_candidates[i].begin()));
				cout<<maxi<<" ";
			}
		}
		cout<<"\n";
	}

        return 0;
}
