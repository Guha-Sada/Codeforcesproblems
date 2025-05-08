//1013Div3 C
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
		int n;cin>>n;
        
        if(!(n%2))
        {
            cout<<"-1\n";
            continue;
        }
        
        if(n==1) cout<<"1\n";
        else 
        {
            for(int i=0;i<n;i++)
            {
                cout<<(2*i>n?2*i-n+1:2*i+1)<<" ";    
            }
            cout<<"\n";
        }

	}

	return 0;
}
