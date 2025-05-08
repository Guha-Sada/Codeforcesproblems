//I read the editorial for this one https://codeforces.com/blog/entry/6779. Took me a while to understand how it works. My previous code also worked but was too time complex.
//Credit to codeforces user Fcdkbear's explanation.

#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<long long> vll;

int main()
{
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        
	int n,q; cin>>n>>q;

	vi a(n),b(n);

	for(int i=0;i<n;i++) cin>>a[i];
	
	vi d(n);

	while(q--)
	{
		int l,r;
		cin>>l>>r;

		d[l-1]++;
		if(r<n) d[r]--;
	}

	int index_frequency=0;

	for(int i=0;i<n;i++)
	{
		index_frequency+=d[i];
		b[i]=index_frequency;
	}

	sort(b.begin(),b.end());//starting from least used to most used index.
	sort(a.begin(),a.end());//aligning the highest used values to the most used index
	
	ll sum=0;
	
	for(int i=0;i<n;i++)
	{
		//cout<<"b ="<<b[i]<<"* a ="<<a[i];
		sum+=(b[i]*1ll*a[i]);
	}
	cout<<sum<<"\n";
	return 0;
}

