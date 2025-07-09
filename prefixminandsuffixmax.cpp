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
        vi a(n+1),pre(n+1,INT_MAX),suff(n+2,0);

        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            pre[i]=min(pre[i-1],a[i]);
        }
        
        for(int i=n;i>0;i--) suff[i]=max(suff[i+1],a[i]);
        
        for(int i=1;i<=n;i++) cout<<(a[i]==pre[i]||a[i]==suff[i]?1:0);

        cout<<"\n";
    }

    return 0;
}
