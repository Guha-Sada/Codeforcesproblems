#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
        string s; cin>>s;
        int remaining_string=0;
        
        for(int i=0;i<int(s.size());i++)
        {
            if(remaining_string && s[i]=='B') remaining_string--;
            else remaining_string++;
        }

        cout<<remaining_string<<"\n";
    }

	return 0;
}
