//I read the editorial.

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
        int n,k; cin>>n>>k;
        string s; cin>>s;

        if(2*k>=n)
        {
            cout<<"NO\n";
            continue;
        }

        bool flag=true;
        for(int i=0;i<k;i++)
        {
            if(s[i]==s[n-i-1]) continue; //Valid palindrome chars.
            else 
            {
                flag=false;
                break;
            }
        }
        cout<<(flag?"YES\n":"NO\n");
    }
    return 0;
}
