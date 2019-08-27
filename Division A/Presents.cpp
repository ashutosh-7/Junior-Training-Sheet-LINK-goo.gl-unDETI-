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
				map<ll,ll>m;
				ll temp;
				for(ll i=1;i<=n;i++)
				{
					cin>>temp;
					m[temp]=i;
					
				}
				for(ll i=1;i<=n;i++)
				cout<<m[i]<<" ";


	return 0;
}
