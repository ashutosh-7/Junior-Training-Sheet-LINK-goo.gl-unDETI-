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
			for(ll i=0;i<n;i++)
			cin>>arr[i];
			ll mi[n];
			ll mx[n];
			mi[0]=abs(arr[0]-arr[1]);
			mx[0]=abs(arr[0]-arr[n-1]);
			for(ll i=1;i<n;i++)
			{
			mi[i]=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
				mx[i]=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
				
				
			}
			for(ll i=0;i<n;i++)
			{
				cout<<mi[i]<<" "<<mx[i]<<endl;
			}
	return 0;
}
