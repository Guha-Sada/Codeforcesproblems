//I read the editorial.

#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;
typedef pair<int,int> pii;

int moves(const string &s,char c)
{
    if(s.size()==1) return s[0]!=c;
    
    int mid= s.size()/2;

    int cntl= moves(string(s.begin(),s.begin()+mid),c+1)+(s.size()/2)-count(s.begin()+mid,s.end(),c);
    
    int cntr= moves(string(s.begin()+mid,s.end()),c+1)+(s.size()/2)-count(s.begin(),s.begin()+mid,c);

    return min(cntl,cntr);
}


int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
        int n; cin>>n;
        string s; cin>>s;
        cout<<moves(s,'a')<<"\n";
    }

	return 0;
}
