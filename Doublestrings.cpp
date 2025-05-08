
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t;
    cin >> t;

    while (t--) 
    {
    
    	int n;
    	cin >> n;
    	vector<string> words(n);
    	unordered_set<string> wordSet;
    	string out;

    	for (int i = 0; i < n; i++) 
    	{
        	cin >> words[i];
        	wordSet.insert(words[i]);
   	}

    	for (const string& s : words) 
    	{
        	bool found = false;
        	int len = s.size();

        	for (int split = 1; split < len; split++) 
		{
            		string left = s.substr(0, split);
            		string right = s.substr(split);

            		if (wordSet.count(left) && wordSet.count(right)) 
	    		{
                		found = true;
                		break;
            		}
        	}
        	out+=found ? "1": "0";
    	}
   	cout<<out<<"\n";
    }

    return 0;
}
