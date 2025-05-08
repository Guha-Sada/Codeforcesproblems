//Went through this in lecture
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

const ll inf=1e7;
vi p;

int get_operations(int l, int r)
{
    if(r-l==1) return 0;

    int m=(l+r)/2,left_sub=*max_element(p.begin()+l,p.begin()+m),right_sub=*max_element(p.begin()+m,p.begin()+r),operations=0;

    if(left_sub>right_sub)
    {
        operations++;
        for(int i=0;i<m-l;i++) swap(p[l+i],p[m+i]);
    }

    return get_operations(l,m)+get_operations(m,r)+operations;
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t; cin>>t;

    while(t--)
    {
        int m; cin>>m; 
       
        p.assign(m,-1);
        for(int i=0;i<m;i++) cin>> p[i];
        
        int operations = get_operations(0,m);
        
        cout<<(is_sorted(p.begin(),p.end())?operations:-1)<<"\n";
    }
    return 0;
}
