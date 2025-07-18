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

        vi h(n);
        int starter;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            if(i==k-1) starter=h[i];
        }

        //cout<<starter;

        sort(h.begin(),h.end());
        
        if(starter==h[n-1])
        {
            cout<<"Yes\n";
            continue;
        }

        auto lastUnique=unique(h.begin(),h.end());
        h.erase(lastUnique,h.end());

        auto it=upper_bound(h.begin(),h.end(),starter);
        //cout<<"First it="<<*it<<" ";
        int water=1;
        bool flag=false;

        for( ; it!=h.end();it++)
        {
            //cout<<"water= "<<water<<" starter= "<< starter<<" ";
            if(*it - starter > starter - water + 1)
            {
                flag=true;
                //cout<<*it<<" "<<starter<<" "<<water<<" ";
                break;
            }
            
            water+=*it-starter;
            starter=*it;
            
        }

        cout<<(flag?"No":"Yes")<<"\n";

    }
    return 0;
}

