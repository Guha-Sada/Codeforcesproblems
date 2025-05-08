//I read the editorial.

#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

const ll INF=1e9;

int main()
{ 
    vi specials={4,8,15,16,23,42}, out(4);

    for(int i=0;i<4;i++)
    {
        cout<<"? "<<i+1<<" "<<i+2<<"\n";
        cout.flush();
        cin>>out[i];
    }

    do 
    {
        bool flag=true;
        
        for(int i=0;i<4;i++) flag&=(specials[i]*specials[i+1]==out[i]);
        
        if(flag) break;

    } while(next_permutation(specials.begin(),specials.end()));

    cout<<"!";
    for(int i=0;i<6;i++) cout<<" "<<specials[i];
    cout<<"\n";

    cout.flush();
    return 0;
}
