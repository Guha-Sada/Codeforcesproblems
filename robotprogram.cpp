//Edu175 B
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

map<char,int> m={{'L',-1},{'R',1}};

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
	    ll n,x,k; cin>>n>>x>>k;
        string moves; cin>>moves;
        ll cycle=m[moves[0]],cycle_index=0,first_zero_index=0;
        bool flag=false,found_cycle=false;

        for(int i=0;i<n;i++)
        {
            if(i+1>k) break;

            x+=m[moves[i]];
            
            if(x==0&&!flag)
            {
                first_zero_index=i+1;
                flag=true;
            }

            if(i&&!found_cycle)
            {
                cycle+=m[moves[i]];
                if(!cycle)
                {
                    cycle_index=i+1;
                    found_cycle=true;
                }
            }
        }

        if(!flag)
        {
            cout<<0<<"\n";
            continue;
        }
        k-=first_zero_index;
        cout<<(found_cycle?k/cycle_index + 1:1)<<"\n";

    }

	return 0;
}
