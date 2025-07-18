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
        int n,k; cin>>n>>k;

        vi a(n);
        for(auto &x:a) cin>>x;
        
        int hikes=0;

        for(int i=0;i<n;i++)
        {
            bool flag=false;
            
            if(!a[i])
            {
                for(int j=i+1;j<i+k;j++)
                {
                    if(j>=n||a[j])
                    {
                        flag=true;
                        i=j;
                        break;
                    }
                }

                if(flag) ;
                else 
                {
                    hikes++;
                    //cout<<" "<<i+1<<" ";
                    i+=k;
                }
            }
        }

        cout<<hikes<<"\n";

    }
    return 0;
}

