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
				ll x=n;
				ll temp;
				ll arr[10000000];
				memset(arr,-1,10000000*sizeof(ll));
				for(ll i=1;i<=n;i++)
				{
					cin>>temp;
					arr[temp]=1;
					while(arr[x]==1)
					{
						cout<<x<<" ";
						x--;
					}
					cout<<endl;
				}
			
	return 0;
}
