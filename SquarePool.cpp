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
        int n,s,score=0; cin >> n >> s;

        for(int i=0;i<n;i++)
        {
            int dx,dy,x,y;  cin>> dx >> dy >> x >> y ;

            if((x==y&&dx==dy)||(x==s-y&&dx+dy==0))
            {
              //  cout<<"\n"<<x<<" "<<y<<" "<<dx<<" "<<dy<<"\n";
                score++;
            }
        }
        
        cout<<score<<"\n";

    }
    return 0;
}
