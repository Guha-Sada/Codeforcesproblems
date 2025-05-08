#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;
typedef vector<bool> vb;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int t;cin>>t;

	while(t--)
	{
        string s; cin>>s;
        int n=s.length();

        bool found0=false,found1=false;
        string out="";

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0'&&!found0)
            {
                found0=true;
                out+='0';
            }
            else if(s[i]=='1'&&!found1)
            {
                found1=true;
                out+='1';
            }

            if(found0&&found1) break;
        }

        for(int i=0;i<n;i++) cout<<out;

        cout<<"\n";
    }

	return 0;
}
