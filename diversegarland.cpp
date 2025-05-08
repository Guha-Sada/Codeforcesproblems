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
	
	int n;cin>>n;
    string s; cin>>s;

    int recolors=0;

    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            recolors++;
            for(auto color:{'R','G','B'})
            {
                s[i]=color;
                if(i==n)
                {
                    if(s[i]!=s[i-1]) break;
                }
                else if(s[i]!=s[i-1]&&s[i]!=s[i+1]) break; 
            }
        }
    }

    cout<< recolors<<"\n"<<s;

    return 0;
}
