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
				string s[n];
			for(ll i=0;i<n;i++)
			{
					cin>>s[i];
				}
				 ll count=0;
				for(ll i=0;i<n-1;i++)
				{
					if(s[i]!=s[i+1])
					count++;
				}
				cout<<count+1<<endl;
	return 0;
}
