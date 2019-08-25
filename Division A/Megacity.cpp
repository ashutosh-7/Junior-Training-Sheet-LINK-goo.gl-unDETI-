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
				ll n,k;
				ll x[n],y[n];
				ll len[n];
				ll pop[n];
					ll temp,sum=0;;
				cin>>n>>k;
				for(ll i=0;i<n;i++)
				{
				
				cin>>x[i]>>y[i];
				len[i]=pow(x[i],2)+pow(y[i],2);
			
				cin>>temp;
				pop[i]=temp;
				sum+=temp;
			}
			ll x2;
			sort(len,len+n);
				ll req=1000000-k;
				if(req<sum)
				cout<<"-1";
				else
				{
					for(ll i=0;;i++)
					{
						req=req-pop[i];
						if(req<=0)
						{
							x2=i;
							break;
						}
					}
					cout<<sqrt(len[x2])<<endl;
				}
				
	return 0;
}
