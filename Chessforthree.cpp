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

    int t; cin>>t;

    while(t--)
    {
        int p1,p2,p3; cin>>p1>>p2>>p3;
       
        cout<<((p1+p2+p3)%2?-1:min((p1+p2+p3)/2,p1+p2))<<"\n";
    }
    return 0;
}
