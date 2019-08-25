#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vtr vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
				string s;
				map<char,int>mp;
					map<char,int>::iterator it;
				getline(cin,s);
				//cout<<s;
				for(ll i=0;i<s.size();i++)
				{
					ll st=s[i]-'a';
					if(st>=0 && st<26)
					mp[s[i]]++;
				}
//				for(it=mp.begin();it!=mp.end();it++)
//				cout<<it->first<<" ";
cout<<mp.size();
				
	return 0;
}
