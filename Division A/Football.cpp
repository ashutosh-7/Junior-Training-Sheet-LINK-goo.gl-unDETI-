#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				
						ll n;
				cin>>n;
				string s;
				map<string,ll>mp;
				set<string>s2;
			
				
					for(ll i=0;i<n;i++)
				{
					cin>>s;
					s2.insert(s);
					mp[s]++;
				}
				string a,b;
				set<string>::iterator it;
				if(s2.size()==1)
				{
					it=s2.begin();
					cout<<*it;
				}
				else
				{
				
				for(it=s2.begin();it!=s2.end();it++)
				{
					a=*it;
					it++;
					b=*it;
				}
			ll x=mp[a];
			ll y=mp[b];
			if(x>y)cout<<a;
			else cout<<b;
		}
			
				
				
	return 0;
}
