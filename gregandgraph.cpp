#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;


int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n; cin>> n;
    
    vector<vll> weights(n,vll(n));
    vi x_vals(n);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin>>weights[i][j];

    for(int i=0;i<n;i++) 
    {
        cin>>x_vals[i];
        x_vals[i]--;
    }
    reverse(x_vals.begin(),x_vals.end());

    vll out;
    for(int k=0;k<n;k++)
    {
        int del_index=x_vals[k];
        ll shortest_sum=0;

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                weights[i][j]=min(weights[i][j],weights[i][del_index]+weights[del_index][j]);
        
        for(int i=0;i<=k;i++)
             for(int j=0;j<=k;j++)
                shortest_sum+=weights[x_vals[i]][x_vals[j]];       
        out.push_back(shortest_sum);
    }

    for(int i=n-1;i>-1;i--) cout<<out[i]<<" ";

    cout<<"\n";

    return 0;
}
