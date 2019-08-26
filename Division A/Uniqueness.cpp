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
			{
				cin>>arr[i];
			}
			ll min=-1,max=-2;
			for(ll i=0;i<n-2;i++)
			{
				if(arr[i]==arr[i+1] || arr[i]==arr[i+2] ||arr[i+1]==arr[i+2])
				{
				min=i;
				break;}
			}
			for(ll i=0;i<n-2;i++)
			{
				
				if(arr[i]==arr[i+1] || arr[i]==arr[i+2]||arr[i+1]==arr[i+2])
				{
				max=i;
		}
			}
			min+=2;
			
			//cout<<min<<" "<<max;
			if(min==-1)
			{
				cout<<"0";
			}
		if(min==max)
			cout<<"2";
			if(max-min>=2)
			{
				cout<<max-min+1;
			}
			if(max-min<2)
			{
				min-=2;
				cout<<max-min+1;
			}
	return 0;
}
