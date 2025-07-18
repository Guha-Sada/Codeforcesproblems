#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>

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

        vll p(n),s(n);
        for(auto &x:p) cin>>x;
        for(auto &x: s) cin>>x;

        vll a(n);
        for(int i=0;i<n;i++) a[i]=lcm(p[i],s[i]);

        ll pre_gcd=0,suf_gcd=0;
        bool flag=false;
        
        for(int i=0;i<n;i++)
        {
            pre_gcd=gcd(pre_gcd,a[i]);
            suf_gcd=gcd(suf_gcd, a[n-1-i]);

            if(pre_gcd!=p[i]||suf_gcd!=s[n-1-i])
            {
                flag=true;
                break;
            }
        }

        cout<<(flag?"No":"Yes")<<"\n";

    }
    return 0;
}

