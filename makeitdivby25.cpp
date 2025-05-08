//I just brute forced it affter trying some different idea. Maximum value of n=10^18. so if we take input as a string of size k, max k is 18. So, k^2 is feasable.
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
        string s; cin>>s;

        int n=s.size();
        int min_deletions=INT_MAX;

        for(int i=0;i<n-1;i++)
        {  
            for(int j=i+1;j<n;j++) if(((s[i]-'0')*10+(s[j]-'0'))%25==0) min_deletions=min(min_deletions,n-i-2);//Basically create number 00,25,50 or 75 and find the deletions required to make them happen.
        }
        cout<<min_deletions<<"\n";
    }
    
	return 0;
}
