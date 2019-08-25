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
			ll arr[n];
			map<ll,ll>x;
			ll temp;
			map<ll,ll>::iterator it;
			for(ll i=0;i<n;i++)
			{
				cin>>arr[i];
				cin>>temp;
				x[temp]++;
			}
//			for(it=x.begin();it!=x.end();it++)
//			cout<<it->first<<" " <<it->second<<endl;
ll count=0;
for(ll i=0;i<n;i++)
{
	temp=arr[i];
	count+=x[temp];
}
cout<<count;

	return 0;
}
