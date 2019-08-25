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
				ll n;
				cin>>n;
				ll x=n;
				string s,temp;
				vector<string>v;
				while(n--)
				{
					temp="";
					cin>>s;
					if(s.size()<=10)
					v.push_back(s);
					else
					{
						
						temp+=s[0];
					//	temp+=(string)s.size();
				ll siz=s.size()-2;
				temp+=to_string(siz);
					
						temp+=s[s.size()-1];
						v.push_back(temp);
					}
				}
				
				for(ll i=0;i<x;i++)
				cout<<v[i]<<endl;
			
	return 0;
}
