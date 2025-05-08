#include<bits/stdc++.h>

int main()
{
	using namespace std;
	
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	
	int t,n,x,mini,maxi,changes;
	cin>>t;

	while(t--)
	{
		cin>>n>>x;
		vector<int> piles(n);

		for(int i=0;i<n;i++)
		{
			cin>>mini;
			piles[i]=mini;
		}
		
		if(n==1)
		{	
			cout<<"0\n";
			continue;
		}
	
		mini=piles[0];
		maxi=piles[0];
		changes=0;
		for(int i=1;i<n;i++)
		{
			if((abs(piles[i]-mini)>2*x)||(abs(piles[i]-maxi)>2*x))
			{
				changes++;
				mini=piles[i];
				maxi=piles[i];
			}
			else if(piles[i]<mini)
				mini=piles[i];
			else if(piles[i]>maxi)
				maxi=piles[i];

		}	
		cout<<changes<<"\n";
	}	
	

	
	return 0;
}
