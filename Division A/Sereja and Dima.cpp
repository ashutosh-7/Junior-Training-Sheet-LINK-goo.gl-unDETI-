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
				ll i=0,j=n-1;
				ll s=0,d=0;
				ll x;
			for(ll x=0;x<n;x++){
			
					if(x%2==0)
					{
					
					if(arr[i]>=arr[j])
					{
					
					s+=arr[i];
					i=i+1;
				}
				else{
				s+=arr[j];
				j-=1;
			}
				}
				else
				{
					if(arr[i]>=arr[j])
					{
					
					d+=arr[i];
					i=i+1;
				}
				else{
				d+=arr[j];
				j-=1;
				}
				
				}
					}
					cout<<s<<" "<<d;
	return 0;
}
