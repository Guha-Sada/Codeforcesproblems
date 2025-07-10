//Read te editorial and the code included :(
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
        int n,m; cin>>n>>m;

        vvi a(n,vi(m));
        int max_count=0,maxi=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]>maxi)
                {
                    maxi=a[i][j];
                    max_count=1;
                }
                else if(a[i][j]==maxi) max_count++;
            }
        }
        vi row(n),column(m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==maxi)
                {
                    row[i]++;
                    column[j]++;
                }
            }
        }

        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(row[i]+column[j]-(a[i][j]==maxi)==max_count)
                {
                    flag=1;
                }
            }
        }

        cout<<maxi-flag<<"\n";
    }
    return 0;
}
