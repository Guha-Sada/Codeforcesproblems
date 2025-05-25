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
        
        int balance=0,n=s.length();
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') balance++;
            else if(s[i]==')') balance--;

            if(balance==0&&i!=n-1) 
            {
                flag=true;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<"\n";
    }

	return 0;
}
