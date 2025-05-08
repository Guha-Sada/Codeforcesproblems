//1009div3 C
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;


bool nondegenTri(int x, int y) 
{
    int z = x ^ y;
    return (x + y > z) && (x + z > y) && (y + z > x);
}

int findValidY(int x) 
{
    int left = 1, right = x - 1, valid_y = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nondegenTri(x, mid)) 
        {
            valid_y = mid;
            break;
        } 
        else 
        {
            left = mid + 1;
        }
    }

    return valid_y;
}


int main() 
{

	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t;cin >> t;
    while (t--) 
    {
        int x; cin>>x;
        cout<<findValidY(x)<<"\n";
    }

    return 0;
}
