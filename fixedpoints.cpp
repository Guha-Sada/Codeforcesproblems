
//Broke my head over this problem. I read the editorial and this is my implementation of the logic there. The idea is as follows: Create dp states where dp[i][j] contains the maximum number of elements equal to their indices after looking at the first i elements and having deleted i-j elements,i.e., not deleting j elements from the array. Then, our dp[n]'th state will have stored the max number of indices stored at it's right location for each deletion/shift count. Just take the min of those >=k. Very clever solution by MrPaul_TUser  

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
                int n,k;cin>>n>>k;

		vi a(n+1);

		for(int i=1;i<=n;i++) cin>>a[i];
        	
		vvi dp(n+1,vi(n+1));
		int adder=0;

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				dp[i+1][j]=max(dp[i+1][j],dp[i][j]);

				adder=((a[i+1]==j+1)?1:0);
				dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+adder);

			}
			
		}
		
		int out=-1;
		for(int i=n;i>=0;i--)
		{
			if(dp[n][i]>=k)
			{
				out=n-i;
				break;
			}

		}

		cout<<out<<"\n";
	}


        return 0;
}
