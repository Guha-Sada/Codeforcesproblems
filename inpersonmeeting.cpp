#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

const ll inf=10e17;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);//cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
		int n,m,k; cin>>n>>m>>k;
        vector<vll> weights (n+m,vll(n+m,inf));

        for(int i=0;i<k;i++)
        {
            ll u,v,c; cin>>u>>v>>c;
            weights[u][v]=min(weights[u][v],c);
            weights[v][u]=min(weights[u][v],c);
        }        
        
        for(int o=0;o<n+m;o++)
            for(int i=0;i<n+m;i++)
                for(int j=0;j<n+m;j++)
                    weights[i][j]=min(weights[i][j],weights[i][o]+weights[o][j]);
       

        ll min_cost=inf;
        int city=0;
        for(int i=n;i<n+m;i++)
        {
            ll cost=0;
            for(int j=0;j<n;j++)
            {
                if(weights[j][i]==inf)
                { 
                    //cout<<"\nBreaking pair"<<j<<" "<<i<<"\n";
                    cost=inf; 
                    break;
                }
                else
                {
                    cost+=weights[j][i];
                    //cout<<j<<" "<<i<<" "<< weights[j][i]<<" "<<cost<<"\n";
                }
            }
            
            if(cost<min_cost)
            {
                min_cost=cost;
                city=i;
            }
        }
        
        if(min_cost==inf) cout<<-1<<"\n";
        else cout<<city<<" "<<min_cost<<"\n";

    }
	return 0;
}
