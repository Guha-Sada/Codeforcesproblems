#include<bits/stdc++.h>



int main()
{
	using namespace std;
	
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	
	int t,n,k,count;
	cin>>t;

	while(t--)
	{
		cin>>n>>k;
		vector<int> perm(n);
		for(int i=0;i<n;i++)
		{
			cin>>count;
			perm[i]=count;
		}
		count=0;

		for(int i=0;i<n;i++)
		{
			if(abs(perm[i]-i-1)%k)
				count++;

		}
		if(count==0)
			cout<<"0\n";
		else if(count==2)
			cout<<"1\n";
		else 
			cout<<"-1\n";

	
	}
	return 0;
}
