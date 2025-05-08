
#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

        int n,q;cin>>n>>q;
	vector<int> nums(n);
	vector<long long> pre(n+1);

	for(int i=0;i<n;i++) cin>>nums[i];

	sort(nums.begin(),nums.end());

	for(int i=1;i<=n;i++)
	{
		pre[i]=pre[i-1]+nums[i-1];
		//cout<<pre[i]<< " ";
	}

	while(q--)
	{
		int x,y;cin>>x>>y;	
		
		cout<<pre[n-x+y]-pre[n-x]<<"\n";
	}
        return 0;
}

