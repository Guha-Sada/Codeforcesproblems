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

        vi a(n),b(n),c(n),d(n);
        for(int i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i]>>d[i];

        ll score=0;//extra_0=0,extra_1=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>c[i])
            {
                score+=a[i]-c[i];
                a[i]=c[i];
            }
            
            if(b[i]>d[i])
            {
                score+=a[i]+(b[i]-d[i]);
            }
        }

        cout<<score<<"\n";

    }
    return 0;
}

