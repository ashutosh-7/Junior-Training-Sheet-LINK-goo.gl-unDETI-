#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);


int main() {
				fast
			string s="qwertyuiopasdfghjkl;zxcvbnm,./";
			char ch;
			cin>>ch;
			if(ch=='R')
			{
				string s2;
				cin>>s2;
				for(ll i=0;i<s2.size();i++)
				{
					char x=s2[i];
					for(ll j=0;j<s.size();j++)
					{
					if(x==s[j])
					{
					cout<<s[j-1];	
					break;
				}
					}
				}
				
			}
			else
			{
				string s2;
				cin>>s2;
				for(ll i=0;i<s2.siwze();i++)
				{
					char x=s2[i];
					for(ll j=0;j<s.size();j++)
					{
					if(x==s[j])
					{
					cout<<s[j+1];	
					break;
				}
					}
				}
				
			}
	return 0;
}
