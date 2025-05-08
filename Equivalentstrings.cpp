//Read the editorial
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;    
typedef vector<vector<int>> vvi;  
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;     
typedef long long ll;


string equiv(string s)
{

    int n= int(size(s));
    if(n%2) return s;

    string s1=equiv(s.substr(0,n/2));
    string s2=equiv(s.substr(n/2,n/2));

    if(s1<s2) return s1+s2;

    return s2+s1;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string a,b; cin>>a>>b;
    cout<<(equiv(a)==equiv(b)?"YES\n":"NO\n");

    return 0;
}
