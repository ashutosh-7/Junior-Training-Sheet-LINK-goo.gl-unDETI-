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
				ll n=5;
				ll i1,j1;
				ll temp;
				ll arr[5][5];
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++)
					{
						cin>>temp;
						arr[i][j]=temp;
						if(temp==1)
						{
							i1=i;
							j1=j;
						}
					}
					
				}
				ll cal=abs(i1-2)+abs(j1-2);
				cout<<cal<<endl;
	return 0;
}
