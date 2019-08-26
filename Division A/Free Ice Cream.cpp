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
				ll n,initial;
				cin>>n>>initial;
				ll present=0,people=0;
				present=initial;
				ll arr[n];
				char x;ll ice;
				for(ll i=0;i<n;i++)
				{
					
					cin>>x;
					cin>>ice;
					if(x=='+')
					{
						present+=ice;
					}
					if(x=='-')
					{
						if(present>=ice)
						{
							present-=ice;
						}
						else
						people++;
					}
					
				}
				cout<<present<<" "<<people<<endl;
	return 0;
}
