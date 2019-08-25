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
				//ll t;
				ll n,h;
				cin>>n>>h;
				ll *arr=new ll[n];
				for(ll i=0;i<n;i++)
				cin>>arr[i];
				ll x=0;
				for(ll i=0;i<n;i++)
				{
					if(arr[i]>h)
					x+=2;
					else
					x+=1;
				}
				cout<<x<<endl;
				
	return 0;
}
