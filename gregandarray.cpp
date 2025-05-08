
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;

int main()
{
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int n,m,k;cin>>n>>m>>k;

	vll a(n);
	for(int i=0;i<n;i++) cin>>a[i];


	vector<vi> d(m,vector<int>(3));//storing l,r,d values
	for(int i=0;i<m;i++) cin>>d[i][0]>>d[i][1]>>d[i][2];

	vll change_freq(m);
	for(int i=0;i<k;i++)
	{
		int x,y; cin>>x>>y;
		change_freq[x-1]++;
		if(m-y) change_freq[y]--;
	}
	
	vll changes(n);
	ll change=0;

	for(int i=0;i<m;i++)
	{
		change+=change_freq[i];
		changes[d[i][0]-1]+=change*d[i][2];
		if(n-d[i][1]) changes[d[i][1]]-=change*d[i][2];
	}

	change=0;
	for(int i=0;i<n;i++)
	{
		change+=changes[i];
		cout<<a[i]+change<<" ";
	}

	
        return 0;
}
