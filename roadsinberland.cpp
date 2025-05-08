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

    int n; cin>>n;

    vector<vll> weights(n,vll(n));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>weights[i][j];
        }
    }

    int k; cin>>k;
   //cout<<"\nK= "<<k<<"\n"; 
    while(k--)
    {
        int a,b,c; cin>>a>>b>>c;
        a--;
        b--;
        weights[a][b]=min(weights[a][b],1ll*c);
        weights[b][a]=min(weights[b][a],1ll*c);

        ll shortest_sum=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                weights[i][j]=min(weights[i][j],weights[i][a]+weights[a][b]+weights[b][j]);
                weights[i][j]=min(weights[i][j],weights[i][b]+weights[b][a]+weights[a][j]);
                shortest_sum+=weights[i][j];
            }
        }
        cout<<(shortest_sum/2)<<" ";      
    }
    cout<<"\n";
	return 0;
}
