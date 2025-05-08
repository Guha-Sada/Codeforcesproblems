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
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin>>t;

    while(t--)
    {
        int n,m; cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i%2) cout<<(i/2)*m+j+1<<" ";             //Basically, left to right diff is always one and up and down is a multiple of m. so, not prime.
                else cout<<(i/2 + n/2)*m+j+1<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}
