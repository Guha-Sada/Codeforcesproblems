
#include<bits/stdc++.h>

using namespace std;


//I read the editorial at https://codeforces.com/blog/entry/98253. The solution is based on PurpleCrayon's explanation. My previous methods did not utilize prefix sum.


int main()
{
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	//First, let's precalculate all 200000 possible numbers' set bit count.
	
	vector<int> bits(18);
	vector<vector<int>> bits_map(2000001);

	for(int i=0;i<18;i++)	//Mapping 0 first.
	{
		bits_map[0].push_back(0);
	}
	
	for(int i=0;i<=200000;i++)
	{
		int temp=i,power=0;

		while(temp)
		{
			if(temp & 1) bits[power]++;
			
			temp>>=1;
			power++;
		}
		 
		for(int j=0;j<18;j++) 
			bits_map[i].push_back(bits[j]);
	}

	 

        int t; cin>>t;

        while(t--)
        {
                int l,r;cin>>l>>r;	
		
		int mini=INT_MAX;
		for(int i=0;i<18;i++)
		{
			mini=min( mini , (r-l+1)-(bits_map[r][i]-bits_map[l-1][i]));//The expression on the total number of bits-set bits,i.e, the number of changes to be made in [l,r] 
		}
		cout<<mini<<"\n";
        }

        return 0;
}

