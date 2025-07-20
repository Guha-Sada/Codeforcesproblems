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

const int N=2e5+2;

struct coordinates
{
    int x,y,idx;
}coords[N];


bool compare_by_x(coordinates a,coordinates b)
{
    return a.x<b.x;
}

bool compare_by_y(coordinates a, coordinates b)
{
    return a.y<b.y;
}

int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin>>t;

    while (t--) 
    {
        int n; cin>>n;

        for(int i=0;i<n;i++) 
        {
            cin>>coords[i].x>>coords[i].y;
            coords[i].idx=i+1;
        }
        sort(coords,coords+n, compare_by_x);
        
        sort(coords,coords+n/2,compare_by_y);
        sort(coords+n/2,coords+n,compare_by_y);
        

        for(int i=0;i<n/2;i++) cout<<coords[i].idx<<" "<<coords[n-1-i].idx<<"\n"; 

    }
    return 0;
}

