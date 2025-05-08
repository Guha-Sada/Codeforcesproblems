
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;


bool check_sliding_window(int n,int k, vll &nums)
{
	vi first_window(22);//Keeps track of OR of first k numbers

	for(int i=0;i<k;i++)
	{
		int j=0,num=nums[i];
		while(num>0)
		{
			if(num%2) first_window[j]++;
			num/=2;
			j++;
		}
	}

	vi next_window=first_window;

	for(int i=k;i<n;i++)
	{
		int j=0,num=nums[i];
		while(num>0)//Adding the next number
		{
			if(num%2)next_window[j]++;
			num/=2;
			j++;
		}
		
		j=0,num=nums[i-k];//To remove the previous number,i.e, to shift the window by 1
		while(num>0)
		{
			if(num%2)next_window[j]--;//subtrat one from count of the particular bit
			num/=2;
			j++;
		}

		for(int i=0;i<22;i++)//Checking if the window does not match the first window
		{
			if(next_window[i]&&!first_window[i]) return false;

			if(!next_window[i]&&first_window[i]) return false;

		}

	}
	return true;
}


int main()
{
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

        int t;cin>>t;

        while(t--)
        {
                int n;cin>>n;
		
		vll a(n);

		for(int i=0;i<n;i++)cin>>a[i];

		
		int low=1,high=n,out=n;

		while(low<=high)
		{
			int mid=(low+high)/2;

			if(check_sliding_window(n,mid,a))
			{
				out=mid;
				high=mid-1;//Keep checking for minimum k value that works
			}
			else low=mid+1;
		}
		cout<<out<<"\n";

        }

        return 0;
}
