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
		int n;cin>>n;

		vi a(n),b(n);
		vpi time_pairs;
		ll sum_petya_time=0;

		for(int i=0;i<n;i++) cin>>a[i];

		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			sum_petya_time+=b[i];
			time_pairs.push_back({a[i],b[i]});
		}

		sort(time_pairs.begin(),time_pairs.end());//Sorted by delivery times

		int sum=0,out=0;
		for(int i=n-1;i>-1;i--)
		{
			sum+=time_pairs[i].second;
			if(sum==time_pairs[i].first) 
			{
				out=time_pairs[i].first;
				break;
			}
			else if(sum>time_pairs[i].first)
			{
				out=max(sum-time_pairs[i].second,time_pairs[i].first);
				break;
			}
		}

		cout<<(out?out:sum_petya_time)<<"\n";

	}

	return 0;
}
