//I read the editorial
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;


int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin>>t;

    while (t--) 
    {
        int n; cin>>n;

        map<int,int> freq; 
        vi a(n);
        for(auto &x:a)
        {
            cin>>x;
            freq[x]++;
        }

        vi diff(n+2),out(n+1);

        for(int i=0;i<=n;i++)
        {
            diff[freq[i]]++;
            diff[n-i+1]--;

            if(!freq[i]) break;
        }

        /*
        cout<<"\n";
        for(auto &x:diff) cout<<x<<" ";
        cout<<"\n";
        */

        out[0]=diff[0];
        cout<<out[0]<<" ";

        for(int i=1;i<=n;i++)
        {
            out[i]=out[i-1]+diff[i];
            cout<<out[i]<<" ";
        }
        cout<<"\n";
        
        
    }
    return 0;
}
