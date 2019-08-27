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
			ll n,k;
			cin>>n>>k;
			ll arr[n];
			for(ll i=0;i<n;i++)
			{
				cin>>arr[i];
				
			}
			ll m=arr[k-1];
			ll c=0;
			for(ll i=0;i<n;i++)
			{
				if(arr[i]>=m && arr[i]>0)
				c++;
			}
			cout<<c;
	return 0;
}
