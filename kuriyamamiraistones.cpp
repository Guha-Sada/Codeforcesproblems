
#include<bits/stdc++.h>

int main()
{
        using namespace std;
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

        
                
	int n,m,type,l,r;
	cin>>n;          
	
	vector<int> nums(n);
	vector<int64_t> pres(n),pressorted(n);
        for(int i=0;i<n;i++)
        {
                cin>>nums[i];
		if(i==0)
			pres[i]=nums[i];
        	else
			pres[i]=nums[i]+pres[i-1];
	}

	sort(nums.begin(),nums.end());
	pressorted[0]=nums[0];
	for(int i=1;i<n;i++)
		pressorted[i]=nums[i]+pressorted[i-1];

	cin>>m;
	while(m--)
	{
		cin>>type>>l>>r;

		if(type-1)
			cout<<(l-1?pressorted[r-1]-pressorted[l-2]:pressorted[r-1])<<"\n";
		else	
			cout<<(l-1?pres[r-1]-pres[l-2]:pres[r-1])<<"\n";

	}	
        return 0;
}
