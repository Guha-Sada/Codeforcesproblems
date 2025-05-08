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
    ll score=0;
    for(int x=2;x<=n/2;x++)
    {
        ll positive_connection = n/x - 1;
        if(positive_connection) score+=positive_connection*x;
    }
    cout<<4*score<<"\n";//There are 3 more connections for each positive connection with it's negative integer counterparts

	return 0;
}
