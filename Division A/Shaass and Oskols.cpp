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
				for(ll i=0;i<n;i++)
				cin>>arr[i];
				ll query;
				ll line,bird;
				cin>>query;
				while(query--)
				{
					cin>>line>>bird;
					ll temp;
					line-=1;
					if(line-1>=0)
					{
						arr[line-1]+=bird-1;
					}
					if(line+1<n)
					{
						arr[line+1]+=arr[line]-bird;
					}
					arr[line]=0;
				}
				for(ll i=0;i<n;i++)
				{
					cout<<arr[i]<<endl;
				}
	return 0;
}
