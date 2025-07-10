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

        vi a(n), b(n);

        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<n;i++) cin >> b[i];
        
        vpi operations;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1]) 
                {
                    swap(a[j],a[j+1]);
                    operations.push_back({1,j+1});
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(b[j]>b[j+1]) 
                {
                    swap(b[j],b[j+1]);
                    operations.push_back({2,j+1});
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                operations.push_back({3,i+1});
            }
        }
        
        cout<<operations.size()<<"\n";
        for(auto &x:operations)
        {
            cout<<x.first<<" "<<x.second<<"\n";
        }
    }
    return 0;
}
