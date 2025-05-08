#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;
typedef vector<bool> vb;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;

    while(t--)
    {
        string s; cin>>s;
        int n=s.length();

        if(n%2)
        {
            cout<<"NO\n";
            continue;
        }
        
        cout<<(s.substr(0,n/2)==s.substr(n/2,n/2)?"YES":"NO")<<"\n";

    }
    return 0;
}
