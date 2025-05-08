//I read the editorial

#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

const ll inf=1e7;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
    vector<vll> weights(26,vll(26,inf));
    
    for(int i=0;i<26;i++) weights[i][i]=0;
    
    string s,t;
    cin>>s>>t;

    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        char a,b; cin>>a>>b;
        ll w; cin>>w;
        weights[a-'a'][b-'a']=min(weights[a-'a'][b-'a'],w);
    }

    if(s.size()!=t.size())
    {
        cout<<"-1\n";
        return 0;
    }

    for(int k=0;k<26;k++)
        for(int i=0;i<26;i++)
            for(int j=0;j<26;j++)
                weights[i][j]=min(weights[i][j],weights[i][k]+weights[k][j]);


    ll cost=0,temp_cost;
    for(int i=0;i<int(s.size());i++)   
    {
        if(s[i]!=t[i])
        {
            temp_cost=inf;
            char switch_to='0';
            for(int j=0;j<26;j++)
            {
                ll curr_cost=weights[s[i]-'a'][j]+weights[t[i]-'a'][j];
                if(curr_cost<temp_cost)
                {
                    temp_cost=curr_cost;
                    switch_to='a'+j;
                }
            }
            
            if(temp_cost>=inf)
            {
                cout<<"-1\n";
                return 0;
            }
            cost+=temp_cost;
            s[i]=switch_to;
        }
    }
    cout<<cost<<"\n"<<s<<"\n";
	return 0;
}
