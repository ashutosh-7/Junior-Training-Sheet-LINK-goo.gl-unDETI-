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
				string s;
				cin>>s;
				ll temp;
				char x='a';
				ll count=0;
				for(ll i=0;i<s.size();i++)
				{
//				
				temp=abs(s[i]-x);
				x=s[i];
				if(temp<13)
					{
					count+=	temp;
					}
					else
					count+=abs(temp-26);
				
				
				}
				
				cout<<count<<endl;
	return 0;
}
