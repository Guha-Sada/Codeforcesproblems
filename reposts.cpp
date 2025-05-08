#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

const ll INF=1e9;

map<string,vector<string>> children;

//stack<string> repost_chain;

int longest_chain=1;

void dfs(string parent, int chain)
{

    if(!children.count(parent))
    {
        longest_chain=max(longest_chain,chain);
        return;
    }

    for(auto s:children[parent])
    {
        //cout<<s<<" ";
        dfs(s,chain+1);
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        string name1,temp,name2;
        cin>>name1>>temp>>name2;
        
        transform(name1.begin(),name1.end(),name1.begin(),[](unsigned char c){return tolower(c);});

        transform(name2.begin(),name2.end(),name2.begin(),[](unsigned char c){return tolower(c);});
        
        //cout<<"Transformed Input: "<<name1<<" "<<name2<<"\n";
        children[name2].push_back(name1);
    }
    
  //  repost_chain.push("polycarp");
    dfs("polycarp",1);
    cout<<longest_chain<<"\n";
    return 0;
}
