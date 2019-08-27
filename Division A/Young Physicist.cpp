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
			ll x,y,z,x1=0,y1=0,z1=0;
		
				for(ll j=0;j<n;j++)
				{
					cin>>x>>y>>z;
					x1+=x;
					y1+=y;
					z1+=z;
				}
		
			if(x1==0 && y1==0 && z1==0)
			cout<<"YES";
			else	
			cout<<"NO";
	return 0;
}
