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
			ll n,orgsize,waste;
			cin>>n>>orgsize>>waste;
			ll arr[n];
			for(ll i=0;i<n;i++)
			cin>>arr[i];
			ll count=0,temp=0;
			for(ll i=0;i<n;i++)
			{
				if(arr[i]<=orgsize)
				{
					temp+=arr[i];
				}
				if(temp>waste)
				{
					temp=0;
					count++;
				}
			}
			cout<<count;
	return 0;
}
