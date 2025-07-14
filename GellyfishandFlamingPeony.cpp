//read the editorial and read  people's code until one made sense to me :(
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

        vi a(n+1);
        map<int,int> freq;
        int actual_gcd;
        
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }

        actual_gcd=a[1];
        for(int i=2;i<=n;i++) actual_gcd=gcd(actual_gcd,a[i]);

        if(freq.count(actual_gcd))
        {
            cout<<n-freq[actual_gcd]<<"\n";
            continue;
        }
        
        vi dp(5001,5000);

        for(int i=1;i<=n;i++) dp[a[i]]=0;

        for(int i=1;i<=n;i++)
            for(int j=1;j<=5000;j++)
            {
                int temp_gcd=gcd(a[i],j);
                dp[temp_gcd]=min(dp[temp_gcd],dp[j]+1);
            }

        cout<< n-1 + dp[actual_gcd]<<"\n";

    }
    return 0;
}

