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

    int t; cin>>t;

    while(t--)
    {
        int x,y; cin>>x>>y;
        
        int screens= y/2 + y%2;
        
        if(y%2)
        {
            if(screens*7+4<x)
            {
                x-=screens*7+4;
                screens+=x/15+(x%15?1:0);
            }
        }
        else if(screens*7<x)
        {
            x-=screens*7;
            screens+=x/15+(x%15?1:0);
        }
        
        cout<<screens<<"\n";
    }

    return 0;
}
