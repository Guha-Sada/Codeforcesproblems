#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;    
typedef vector<vector<int>> vvi;  
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;     
typedef long long ll;

int MOD=1e9+7;


int nCkmod(int n, int k)        //Code from geeksforgeeks: https://www.geeksforgeeks.org/introduction-and-dynamic-programming-solution-to-compute-ncrp/
{
    vi C(k+1,0);
    C[0]=1;

    for(int i=0;i<=n;i++)
    {
        for(int j=min(i,k);j>0;j--)
        {
            C[j]= (C[j]+C[j-1])%MOD;
        }            
    }
    return C[k];
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
    ll n,m; cin>>n>>m;

    cout<<nCkmod(n+2*m-1,2*m)<<"\n";
    
    return 0;
}
