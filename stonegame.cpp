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
        int n; cin>>n;

        vi a(n);
        int minpos=0,maxpos=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) minpos=i+1;
            if(a[i]==n) maxpos=i+1;
        }
        
        int greater_pos=(minpos>maxpos?minpos:maxpos), lesser_pos=(minpos>maxpos?maxpos:minpos);
        cout<<min({greater_pos,n-lesser_pos+1,lesser_pos+n-greater_pos+1})<<"\n";
    }

    return 0;
}
