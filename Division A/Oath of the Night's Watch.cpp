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
				
				ll n;
				cin>>n;
				ll arr[n];
//				set<ll>s;
//				ll count=0;
//				ll temp;
//				for(ll i=0;i<n;i++)
//				{
//					cin>>temp;
//					
//					s.insert(temp);
//					
//					
//				}
//				if(s.size()<=1)
//				{
//					cout<<"0";
//				}
//				else
//				{
//				cout<<s.size()-2;
//				
//			}
for(ll i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
ll mi=arr[0];
ll mx=arr[n-1];
ll c=0;
for(ll i=0;i<n;i++)
{
	if(arr[i]>mi && arr[i]<mx)
	c++;

	
}
cout<<c;
	return 0;
}
