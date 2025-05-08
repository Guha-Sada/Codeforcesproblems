#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

const ll inf=1e7;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int k; cin>>k;

    int num=19;

    while(k)
    {
        int sum_of_digs=0,temp=num++;
        while(temp)
        {
            sum_of_digs+=temp%10;
            temp=temp/10;
        }
        if(sum_of_digs==10) k--;
    }
    cout<<num-1<<"\n";
    return 0;
}
