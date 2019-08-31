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
				ll t;
				cin>>t;
				while(t--)
				{
					ll n;
					ll count=0;
					cin>>n;
					ll arr[n];
					ll min1[n];
					for(ll i=0;i<n;i++)
					cin>>arr[i];
					ll cs=arr[n-1];
					min1[n-1]=arr[n-1];
					for(ll i=n-2;i>=0;i--)
					{
					
						min1[i]=min(arr[i],min1[i+1]);
					
						
					}
					for(ll i=0;i<n;i++)
					{
						
					if(arr[i]!=min1[i])
					count++;
			}
				cout<<count<<endl;
				
				
				}
	return 0;
}
